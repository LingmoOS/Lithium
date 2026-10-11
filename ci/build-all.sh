#!/bin/bash
# Configure, build and install every component of the tree, in dependency
# order. Used by CI and for local builds:
#
#   sudo apt-get install $(grep -v '^#' ci/debian-deps.txt | xargs)
#   ci/build-all.sh            # -> /tmp/lingmo-build, installs to /usr/local
#
# Components that are deliberately not part of the Qt6/Plasma 6 build:
#   lingmo-screenlocker         (the X11 locker, replaced by KDE's greeter on
#                                Wayland - see lingmo-core/lockscreen)
set -uo pipefail

ROOT="$(cd "$(dirname "$0")/.." && pwd)"
BUILD_DIR="${BUILD_DIR:-/tmp/lingmo-build}"
PREFIX="${PREFIX:-/usr/local}"

# Build order matters for the libraries the shell components link against.
COMPONENTS=(
    LingmoUI
    lib_lingmo
    lingmo-core
    libqapt6
    lingmo-calculator
    lingmo-filemanager
    lingmo-qt-plugins
    lingmo-statusbar
    lingmo-dock
    lingmo-launcher
    lingmo-settings
    lingmo-daemon
    lingmo-appmotor
    lingmo-texteditor
    lingmo-terminal
    lingmo-kwin-plugins
)
INSTALL_FIRST=(LingmoUI lib_lingmo lingmo-core libqapt6)

mkdir -p "$BUILD_DIR"
declare -a FAILED=()

for component in "${COMPONENTS[@]}"; do
    [ -f "$ROOT/$component/CMakeLists.txt" ] || continue
    dir="$BUILD_DIR/$component"
    log="$BUILD_DIR/$component.log"
    rm -rf "$dir"

    if ! cmake -G Ninja -S "$ROOT/$component" -B "$dir" \
            -DCMAKE_BUILD_TYPE=Release \
            -DCMAKE_INSTALL_PREFIX="$PREFIX" \
            -DCMAKE_PREFIX_PATH="$PREFIX" > "$log" 2>&1; then
        echo "FAIL(configure) $component"
        grep -m3 -E 'CMake Error|Could NOT find' "$log" | sed 's/^/    /'
        FAILED+=("$component")
        continue
    fi

    if ! cmake --build "$dir" -j"$(nproc)" >> "$log" 2>&1; then
        echo "FAIL(compile)   $component"
        grep -m5 -E 'error:' "$log" | sed 's/^/    /'
        FAILED+=("$component")
        continue
    fi

    for lib in "${INSTALL_FIRST[@]}"; do
        if [ "$component" = "$lib" ]; then
            cmake --install "$dir" >> "$log" 2>&1
            break
        fi
    done
    echo "OK              $component"
done

echo
if [ "${#FAILED[@]}" -gt 0 ]; then
    echo "构建失败 ${#FAILED[@]} 个: ${FAILED[*]}"
    exit 1
fi
echo "全部组件构建通过"
