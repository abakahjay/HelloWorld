# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## What this is

A personal C++ learning project (C++20, CMake, developed in CLion). Code is written for study: heavy explanatory comments sit right next to the code they explain, and that teaching style should be preserved when editing or adding lessons.

## Build & run

```sh
cmake -S . -B cmake-build-debug
cmake --build cmake-build-debug
cmake-build-debug/HelloWorld
```

`CMakeLists.txt` requires CMake 4.2+. There are no tests or linters.

The program is interactive: several lessons read from `cin` (name, temperature, radius, etc.) and will block waiting for input. When running non-interactively, pipe input in (e.g. `printf 'Ama\n30\n2\n' | cmake-build-debug/HelloWorld`) or read the source instead.

## Architecture

- `src/main.cpp` is only a driver that calls one `lessons::run*()` function per lesson, in the order the topics were learned.
- Each lesson is a `src/lessons/lesson_<topic>.h/.cpp` pair. The header declares a single `void run<Topic>()` in `namespace lessons` and carries a banner comment listing what the lesson covers; the `.cpp` holds the code and notes.
- Shared values go in `src/common/constants.h` (`namespace constants`, `inline constexpr`).
- `src/` is on the include path, so includes are written as `"lessons/lesson_x.h"` / `"common/constants.h"`.
- Include guards follow `HELLOWORLD_<DIR>_<FILE>_H`.

### Adding a lesson

Use the scaffolding script (run from the project root in PowerShell):

```powershell
.\new-lesson <name> "<Title>"     # e.g. .\new-lesson loops "Loops and Conditions"
```

`scripts/new_lesson.ps1` creates `lesson_<name>.h/.cpp`, appends the source to `add_executable` in `CMakeLists.txt` (sources are listed explicitly, not globbed), adds the include and a `// Lesson N:` call in `main()` just above the `END OF PROGRAM` banner, and adds a row to the table in `docs/CPP_NOTES.md`. It relies on those anchors existing. Still do by hand: fill in the header's "Covers:" list, the numbered checklist in `CPP_NOTES.md`, and the layout list in `README.md`.

### Saving work

```powershell
.\save "commit message"
```

`scripts/save.ps1` builds (using CLion's bundled cmake/MinGW if `cmake` isn't on PATH), and only if the build succeeds runs `git add -A`, commits and pushes to `origin` (github.com/abakahjayy/HelloWorld). The `.cmd` wrappers at the root exist to bypass PowerShell's execution policy.
