#!/usr/bin/env bash
set -euo pipefail

# Build release
cmake -S "$(dirname "$0")/.." -B "$(dirname "$0")/../build" -DCMAKE_BUILD_TYPE=Release
cmake --build "$(dirname "$0")/../build" -j

# Install to staging
DESTDIR="$(pwd)/staging" cmake --install "$(dirname "$0")/../build"

# Create package via CPack
( cd "$(dirname "$0")/../build" && cpack -G TGZ )
echo "Created TGZ package."

# Optionally create DEB if tools available
if command -v dpkg >/dev/null 2>&1; then
  ( cd "$(dirname "$0")/../build" && cpack -G DEB )
  echo "Created DEB package."
fi

# Optionally create RPM if tools available
if command -v rpmbuild >/dev/null 2>&1; then
  ( cd "$(dirname "$0")/../build" && cpack -G RPM )
  echo "Created RPM package."
fi

echo "Packages created in build/ directory. Installed files staged at $(pwd)/staging."
