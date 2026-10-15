# ================================================================
# SAVE
# ================================================================
# Builds the project, then commits everything and pushes to GitHub.
# Stops without committing if the build fails.
#
# Usage (from the project folder):
#   .\save "Add loops lesson"
# ================================================================

param([string]$Message = "Update lessons")

$ErrorActionPreference = 'Stop'
Set-Location (Split-Path -Parent $PSScriptRoot)

# Use cmake from PATH, otherwise the one bundled with CLion.
$cmake = (Get-Command cmake -ErrorAction SilentlyContinue).Source
if (-not $cmake) {
    $clion = Get-ChildItem 'C:\Program Files\JetBrains' -Directory -Filter 'CLion*' -ErrorAction SilentlyContinue |
        Sort-Object Name | Select-Object -Last 1
    if (-not $clion) { throw 'cmake not found. Install CMake or CLion.' }
    $cmake = Join-Path $clion.FullName 'bin\cmake\win\x64\bin\cmake.exe'
    $env:PATH = (Join-Path $clion.FullName 'bin\mingw\bin') + ';' + $env:PATH
}

Write-Host '--- Building ---'
& $cmake -S . -B cmake-build-debug | Out-Null
if ($LASTEXITCODE -ne 0) { throw 'CMake configure failed - nothing was committed.' }
& $cmake --build cmake-build-debug
if ($LASTEXITCODE -ne 0) { throw 'Build failed - fix the errors above, nothing was committed.' }

Write-Host '--- Committing ---'
git add -A
git diff --cached --quiet
if ($LASTEXITCODE -eq 0) { Write-Host 'Nothing to commit.'; exit 0 }
git commit -m $Message
if ($LASTEXITCODE -ne 0) { throw 'git commit failed.' }

Write-Host '--- Pushing ---'
git push
if ($LASTEXITCODE -ne 0) { throw 'git push failed.' }
Write-Host 'Saved and pushed to GitHub.'
