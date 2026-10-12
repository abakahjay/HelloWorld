# HelloWorld

A C++ learning project that collects everything covered so far in the
C++ fundamentals course, organized into small, readable lesson modules.

## Layout

```
HelloWorld/
├── CMakeLists.txt
├── README.md
├── .gitignore
├── docs/
│   └── CPP_NOTES.md          # Full list of concepts learned
└── src/
    ├── main.cpp              # Driver: runs each lesson in order
    ├── common/
    │   └── constants.h       # Shared constants (e.g. pi)
    └── lessons/
        ├── lesson_basics.*      # constexpr, output, swapping, naming
        ├── lesson_operators.*   # arithmetic operators, streams
        ├── lesson_exercises.*   # tax calc, user input, temp, math
        ├── lesson_data_types.*  # data types, literals, brace init, typedef
        └── lesson_random.*      # rand/srand + dice-roll exercise
```

## Building

This project uses CMake (configured in CLion).

- **CLion:** open the folder and let CLion configure, then build/run.
- **Command line:**
  ```sh
  cmake -S . -B cmake-build-debug
  cmake --build cmake-build-debug
  cmake-build-debug/HelloWorld
  ```

C++ standard: **C++20**.

## How it is organized

`main()` is only a driver — it calls one function per lesson in the order
the topics were learned:

```cpp
lessons::runBasics();       // constexpr, output, swapping, naming
lessons::runOperators();    // arithmetic operators, streams
lessons::runExercises();    // the labelled exercises
lessons::runDataTypes();    // data types, literals, typedef
lessons::runRandomNumbers();// random numbers + dice roll
```

To study a topic, open the matching `lesson_*.cpp` file — the explanatory
comments live right next to the code.

## Note on input

Several lessons read from the console with `cin`. When you run the program
it will pause and wait for your input (a name, a temperature, a radius).
Have values ready, or read the source instead of running interactively.
