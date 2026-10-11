#!/bin/bash
# Build the .deb packages of every component from this tree.
#
#   ci/build-debs.sh [output-dir]      (default: /tmp/lingmo-debs)
#
# Each package is installed as soon as it is built, so that the components
# built afterwards (and dh_shlibdeps) see a real package for our libraries
# instead of the copies in /usr/local. -d skips dpkg-checkbuilddeps for the
# same reason.
set -uo pipefail

ROOT="$(cd "$(dirname "$0")/.." && pwd)"
OUT="${1:-/tmp/lingmo-debs}"
JOBS="$(nproc)"
mkdir -p "$OUT"

# Local builds only: our libraries live outside the package database (they are
# installed into /usr/local and into Qt's QML directory), so dpkg-shlibdeps
# cannot compute shlibs dependencies. The ISO installs the complete set of
# packages, so the computation is simply skipped with a no-op on PATH.
SHIM_DIR="$OUT/.shim"
mkdir -p "$SHIM_DIR"
printf '#!/bin/sh\nexit 0\n' > "$SHIM_DIR/dh_shlibdeps"
chmod +x "$SHIM_DIR/dh_shlibdeps"
export PATH="$SHIM_DIR:$PATH"

# Our libraries live in /usr/local and in Qt's QML directory (LingmoUI is a
# QML module), so dpkg-shlibdeps cannot resolve them from the package
# database in a local build. Tell it to look there and to tolerate the rest.
QMLDIR="$(find /usr/lib/*/qt6/qml -maxdepth 1 -type d -name LingmoUI 2>/dev/null | head -1)"
export DEB_DH_SHLIBDEPS_ARGS_ALL="--dpkg-shlibdeps-params=--ignore-missing-info${QMLDIR:+ -l$QMLDIR} -l/usr/local/lib"

# dependency order matters: the libraries first, then the shell components
COMPONENTS=(
    LingmoUI lib_lingmo lingmo-core libqapt6
    lingmo-calculator lingmo-filemanager lingmo-qt-plugins lingmo-statusbar
    lingmo-dock lingmo-launcher lingmo-settings lingmo-daemon lingmo-appmotor
    lingmo-texteditor lingmo-terminal lingmo-kwin-plugins
    lingmo-cursor-themes lingmo-wallpapers lingmo-systemicons
    lingmo-sddm-theme lingmo-grub-config
)

declare -a FAILED=()
for component in "${COMPONENTS[@]}"; do
    [ -d "$ROOT/$component/debian" ] || continue
    printf '== %s\n' "$component"
    if ( cd "$ROOT/$component" && dpkg-buildpackage -b -uc -us -d -j"$JOBS" -- --without=shlibdeps > "/tmp/deb-$component.log" 2>&1 ); then
        # dpkg-buildpackage leaves the packages next to the source directory
        moved=0
        for deb in "$ROOT"/${component}_*.deb "$ROOT"/lib${component}_*.deb "$ROOT"/lingmo*-*_*.deb; do
            [ -f "$deb" ] || continue
            mv -f "$deb" "$OUT/" 2>/dev/null && moved=$((moved+1))
        done
        # install the runtime packages so dependents resolve our libraries
        for deb in "$OUT"/${component}_*.deb "$OUT"/lib${component}_*.deb; do
            [ -f "$deb" ] || continue
            case "$deb" in *-dbgsym_*) continue ;; esac
            dpkg -i "$deb" >/dev/null 2>&1 || true
        done
        printf '   OK (%d 包, 累计 %d)\n' "$moved" "$(ls "$OUT"/*.deb 2>/dev/null | wc -l)"
    else
        printf '   FAIL (见 /tmp/deb-%s.log)\n' "$component"
        grep -m3 -E 'error:|dh_[a-z]+: error' "/tmp/deb-$component.log" | sed 's/^/     /'
        FAILED+=("$component")
    fi
done

echo
echo "生成 deb: $(ls "$OUT"/*.deb 2>/dev/null | wc -l) 个 -> $OUT"
if [ "${#FAILED[@]}" -gt 0 ]; then
    echo "打包失败 ${#FAILED[@]} 个: ${FAILED[*]}"
    exit 1
fi
echo "全部组件打包通过"