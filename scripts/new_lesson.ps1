# ================================================================
# NEW LESSON
# ================================================================
# Creates src/lessons/lesson_<name>.h/.cpp and wires the lesson into
# CMakeLists.txt, src/main.cpp and docs/CPP_NOTES.md.
#
# Usage (from the project folder):
#   .\new-lesson loops "Loops and Conditions"
# ================================================================

param(
    [Parameter(Mandatory = $true)][string]$Name,   # e.g. loops  or  if_else
    [Parameter(Mandatory = $true)][string]$Title   # e.g. "Loops and Conditions"
)

$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot

$Name = $Name.ToLower() -replace '[^a-z0-9]+', '_'
$Name = $Name.Trim('_')
$func = 'run' + (($Name -split '_' | ForEach-Object { $_.Substring(0, 1).ToUpper() + $_.Substring(1) }) -join '')
$guard = "HELLOWORLD_LESSON_$($Name.ToUpper())_H"

$hPath   = Join-Path $root "src\lessons\lesson_$Name.h"
$cppPath = Join-Path $root "src\lessons\lesson_$Name.cpp"
$mainPath  = Join-Path $root 'src\main.cpp'
$cmakePath = Join-Path $root 'CMakeLists.txt'
$notesPath = Join-Path $root 'docs\CPP_NOTES.md'

if (Test-Path $hPath) { throw "lesson_$Name already exists." }

$utf8 = New-Object System.Text.UTF8Encoding($false)
function Read-Lines($path) { [System.IO.File]::ReadAllText($path) -split "`r?`n" }
function Write-Lines($path, $lines) { [System.IO.File]::WriteAllText($path, ($lines -join "`r`n"), $utf8) }

# Lesson number = number of lessons already called from main() + 1.
$mainLines = [System.Collections.Generic.List[string]](Read-Lines $mainPath)
$number = @($mainLines | Where-Object { $_ -match '^\s*lessons::run\w+\(\);' }).Count + 1
$upperTitle = $Title.ToUpper()

# ---- header -----------------------------------------------------
Write-Lines $hPath @(
    "#ifndef $guard"
    "#define $guard"
    ""
    "// ================================================================"
    "// LESSON ${number}: $upperTitle"
    "// ================================================================"
    "// Covers:"
    "//   (list the topics here)"
    "// ================================================================"
    ""
    "namespace lessons"
    "{"
    "    void $func();"
    "}"
    ""
    "#endif // $guard"
    ""
)

# ---- source -----------------------------------------------------
Write-Lines $cppPath @(
    "#include `"lesson_$Name.h`""
    ""
    "#include <iostream>"
    ""
    "using namespace std;"
    ""
    "namespace lessons"
    "{"
    "    void $func()"
    "    {"
    "        // ========================================================"
    "        // $upperTitle"
    "        // ========================================================"
    ""
    "        cout << `"Lesson ${number}: $Title`" << endl;"
    "    }"
    "}"
    ""
)

# ---- CMakeLists.txt: add after the last lesson source ------------
$cmake = [System.Collections.Generic.List[string]](Read-Lines $cmakePath)
$last = -1
for ($i = 0; $i -lt $cmake.Count; $i++) { if ($cmake[$i] -match 'src/lessons/.*\.cpp') { $last = $i } }
if ($last -lt 0) { throw 'Could not find lesson sources in CMakeLists.txt' }
$cmake.Insert($last + 1, "        src/lessons/lesson_$Name.cpp")
Write-Lines $cmakePath $cmake

# ---- main.cpp: include + call ----------------------------------
$lastInclude = -1
for ($i = 0; $i -lt $mainLines.Count; $i++) { if ($mainLines[$i] -match '^#include "lessons/') { $lastInclude = $i } }
$mainLines.Insert($lastInclude + 1, "#include `"lessons/lesson_$Name.h`"")

$end = -1
for ($i = 0; $i -lt $mainLines.Count; $i++) { if ($mainLines[$i] -match 'END OF PROGRAM') { $end = $i; break } }
if ($end -lt 1) { throw 'Could not find END OF PROGRAM marker in main.cpp' }
$at = $end - 1   # the ==== line above the marker
$mainLines.InsertRange($at, [string[]]@(
    "    // Lesson ${number}: $Title."
    "    lessons::$func();"
    ""
))
Write-Lines $mainPath $mainLines

# ---- CPP_NOTES.md: add to the "where each topic lives" table -----
$notes = [System.Collections.Generic.List[string]](Read-Lines $notesPath)
$lastRow = -1
for ($i = 0; $i -lt $notes.Count; $i++) { if ($notes[$i] -match '^\| .*`src/lessons/') { $lastRow = $i } }
if ($lastRow -ge 0) {
    $notes.Insert($lastRow + 1, "| $Title | ``src/lessons/lesson_$Name.cpp`` |")
    Write-Lines $notesPath $notes
}

Write-Host "Created lesson $number ($func):"
Write-Host "  src/lessons/lesson_$Name.h"
Write-Host "  src/lessons/lesson_$Name.cpp"
Write-Host "Updated CMakeLists.txt, src/main.cpp, docs/CPP_NOTES.md"
Write-Host "Next: write your code in lesson_$Name.cpp, then run  .\save `"your message`""
