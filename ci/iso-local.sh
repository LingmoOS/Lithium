#!/bin/bash
# Build a Lingmo OS ISO locally, from the packages built out of this tree.
#
#   sudo ci/iso-local.sh                    # forky (testing) live image
#   sudo LINGMO_DIST=trixie ci/iso-local.sh # other distribution
#   sudo SKIP_DEBS=1 ci/iso-local.sh        # reuse an existing /tmp/lingmo-debs
#
# The image normally installs lingmo-* from the OBS repository, which carries
# older (Qt5) builds; here a local repository with freshly built packages takes
# its place. The OBS archive entry is only moved aside for the duration of the
# build and restored on exit.
set -uo pipefail

ROOT="$(cd "$(dirname "$0")/.." && pwd)"
DEB_DIR="${DEB_DIR:-/tmp/lingmo-debs}"
REPO_DIR="${REPO_DIR:-/srv/lingmo-local-repo}"
LINGMO_DIST="${LINGMO_DIST:-forky}"
export LINGMO_DIST

ARCHIVES="$ROOT/iso_builder/lingmo-config/common/archives"
OBS_CHROOT="$ARCHIVES/lingmo.list.chroot"
OBS_BINARY="$ARCHIVES/lingmo.list.binary"
LOCAL_LIST="$ARCHIVES/lingmo-local.list.chroot"

restore() {
    rm -f "$LOCAL_LIST" "$ARCHIVES/lingmo-local.list.binary"
    [ -f "$OBS_CHROOT.off" ] && mv -f "$OBS_CHROOT.off" "$OBS_CHROOT"
    [ -f "$OBS_BINARY.off" ] && mv -f "$OBS_BINARY.off" "$OBS_BINARY"
    return 0
}
trap restore EXIT INT TERM

if [ "${SKIP_DEBS:-0}" != "1" ]; then
    echo "== 1/4 用本树构建 deb 包"
    "$ROOT/ci/build-debs.sh" "$DEB_DIR" || exit 1
else
    echo "== 1/4 复用 $DEB_DIR 的 deb 包"
fi

echo "== 2/4 生成本地 apt 仓库 ($REPO_DIR)"
mkdir -p "$REPO_DIR"
rm -f "$REPO_DIR"/*.deb
cp -f "$DEB_DIR"/*.deb "$REPO_DIR/"
( cd "$REPO_DIR" && dpkg-scanpackages -m . /dev/null > Packages && gzip -kf Packages )

echo "== 3/4 构建期间用本地仓库替代 OBS 源"
[ -f "$OBS_CHROOT" ] && mv -f "$OBS_CHROOT" "$OBS_CHROOT.off"
[ -f "$OBS_BINARY" ] && mv -f "$OBS_BINARY" "$OBS_BINARY.off"
cat > "$LOCAL_LIST" <<EOF
# Locally built Lingmo OS packages (temporary, see ci/iso-local.sh)
deb [trusted=yes] file://$REPO_DIR ./
EOF
cp -f "$LOCAL_LIST" "$ARCHIVES/lingmo-local.list.binary"

echo "== 4/4 构建 ISO (distribution: $LINGMO_DIST)"
cd "$ROOT/iso_builder" || exit 1
bash build.sh "$@"
