Param(
  [string]$Configuration = "Release"
)

$ErrorActionPreference = "Stop"

# Ensure CMake builds are present
$root = Split-Path $PSScriptRoot -Parent
if (-Not (Test-Path "$root\build")) {
  cmake -S $root -B "$root\build" -DCMAKE_BUILD_TYPE=$Configuration
}
cmake --build "$root\build" --config $Configuration

# Generate MSI (requires WiX toolset on PATH)
Push-Location "$root\build"
cpack -G WIX
Pop-Location

Write-Host "MSI created under build/."