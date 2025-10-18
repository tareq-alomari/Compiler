Param(
  [string]$Configuration = "Release"
)

$ErrorActionPreference = "Stop"

# Build C# IDE
Push-Location "$PSScriptRoot\ArabicIDE"
dotnet restore
dotnet build -c $Configuration
Pop-Location

# Expect my_compiler.exe prebuilt and provided; copy if present
$root = Split-Path $PSScriptRoot -Parent
$compiler = Join-Path $root "build\my_compiler.exe"
if (-Not (Test-Path $compiler)) {
    Write-Warning "my_compiler.exe not found at $compiler. Please build C++ part and rerun."
}

# Publish IDE self-contained (framework-dependent by default)
Push-Location "$PSScriptRoot\ArabicIDE"
dotnet publish -c $Configuration -p:PublishSingleFile=false -o "$PSScriptRoot\out\ArabicIDE"
Pop-Location

# Bundle
New-Item -ItemType Directory -Force -Path "$PSScriptRoot\out\bundle" | Out-Null
Copy-Item -Recurse "$PSScriptRoot\out\ArabicIDE\*" "$PSScriptRoot\out\bundle\"
if (Test-Path $compiler) { Copy-Item "$compiler" "$PSScriptRoot\out\bundle\" }

# Zip
$zipPath = "$PSScriptRoot\out\ArabicIDE_Package.zip"
if (Test-Path $zipPath) { Remove-Item $zipPath }
Compress-Archive -Path "$PSScriptRoot\out\bundle\*" -DestinationPath $zipPath

Write-Host "Windows package created at $zipPath"
