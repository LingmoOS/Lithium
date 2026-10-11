#!/bin/bash
# Build the .deb packages of every component from this tree.
#
#   ci/build-debs.sh [output-dir]        (default: /tmp/lingmo-debs)
#
# Used by ci/iso-local.sh so a locally built ISO contains the current code
# instead of the OBS packages.
set -uo pipefail

ROOT="$(cd "$(dirname "$0")/.." && pwd)"
OUT="${1:-/tmp/lingmo-debs}"
JOBS="$(nproc)"
mkdir -p "$OUT"

COMPONENTS=(
    LingmoUI lib_lingmo lingmo-core libqapt6 lingmo-calculator lingmo-filemanager
    lingmo-qt-plugins lingmo-statusbar lingmo-dock lingmo-launcher lingmo-settings
    lingmo-daemon lingmo-appmotor lingmo-texteditor lingmo-terminal
    lingmo-kwin-plugins lingmo-cursor-themes lingmo-wallpapers lingmo-systemicons
    lingmo-sddm-theme lingmo-grub-config
)

declare -a FAILED=()
for component in "${COMPONENTS[@]}"; do
    [ -d "$ROOT/$component/debian" ] || continue
    echo "== $component"
    if ( cd "$ROOT/$component" && dpkg-buildpackage -b -uc -us -d -j"$JOBS" > "/tmp/deb-$component.log" 2>&1 ); then
        # dpkg-buildpackage leaves the .deb next to the source directory
        find "$ROOT" -maxdepth 1 -name "${component}_*.deb" -exec mv -f {} "$OUT/" \; 2>/dev/null
        find "$ROOT" -maxdepth 1 -name "lib${component}*.deb" -exec mv -f {} "$OUT/" \; 2>/dev/null
        echo "   OK -> $(ls "$OUT" | grep -ci '\.deb$') deb 累计"
    else
        echo "   FAIL (see /tmp/deb-$component.log)"
        tail -5 "/tmp/deb-$component.log" | sed 's/^/     /'
        FAILED+=("$component")
    fi
done

# collect everything dpkg-buildpackage left in the parent directories
find "$ROOT" -maxdepth 2 -name '*.deb' -newermt '-2 hours' -exec mv -f {} "$OUT/" \; 2>/dev/null
echo
echo "生成的 deb: $(ls "$OUT"/*.deb 2>/dev/null | wc -l) 个 -> $OUT"
if [ "${#FAILED[@]}" -gt 0 ]; then
    echo "打包失败: ${FAILED[*]}"
    exit 1
fi
