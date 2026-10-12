# Important Concepts Learned

A running checklist of C++ fundamentals covered in this project. Each item
links to the lesson file where it is demonstrated.

## Foundations
1. `#include`
2. `<iostream>`
3. `<string>`
4. `using namespace std`
5. `main()`
6. `return 0`

## Variables & Types
7. Variables
8. Data types
9. `int`
10. `double`
11. `string`
12. Variable initialization
13. `constexpr`
14. `const`
15. Literal suffixes (`F`, `L`, `l`)  — *see `lesson_data_types.cpp`*
16. `auto`
17. Brace initialization `{}`
18. Binary (`0b...`), hex (`0x...`), digit separators (`1'000'000`)
19. `typedef`

## Input / Output
20. `cout`
21. `cin`
22. `endl`
23. `\n`
24. `<<` stream insertion operator
25. `>>` input / extraction operator
26. Streams
27. `getline()`

## Operators & Math
28. Arithmetic operators
29. `%` (modulus / remainder)
30. `++` / `--` (prefix and postfix)
31. `floor`, `ceil`, `pow` (`<cmath>`)
32. Integer division vs. decimal division

## Practice & Conventions
33. Naming conventions (snake / Pascal / camel case)
34. Swapping variables with a temporary
35. User input
36. Temperature conversion (Fahrenheit to Celsius)
37. `srand()` / `rand()` and seeding with `time(0)`
38. Rolling dice (random within a min/max range)

---

### Where each topic lives

| Topic | File |
|-------|------|
| `constexpr`, output, swapping, naming | `src/lessons/lesson_basics.cpp` |
| Operators, streams, chaining | `src/lessons/lesson_operators.cpp` |
| Tax calc, user input, temperature, `<cmath>` | `src/lessons/lesson_exercises.cpp` |
| Data types, literals, brace init, `typedef` | `src/lessons/lesson_data_types.cpp` |
| Random numbers, dice roll | `src/lessons/lesson_random.cpp` |
| Shared `pi` constant | `src/common/constants.h` |
