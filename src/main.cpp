// ================================================================
// C++ CODING LESSON - FUNDAMENTALS
// ================================================================
// This project contains everything covered so far, organized into
// lesson modules under src/lessons/.
//
// main() is only a driver: it runs each lesson in the order the
// topics were learned. Open the matching lesson file to read the
// notes and code for a topic.
//
// See docs/CPP_NOTES.md for the full list of concepts learned.
// ================================================================

#include "lessons/lesson_basics.h"
#include "lessons/lesson_data_types.h"
#include "lessons/lesson_exercises.h"
#include "lessons/lesson_operators.h"
#include "lessons/lesson_random.h"

int main()
{
    // Lesson 1: constexpr, output, swapping, naming conventions.
    lessons::runBasics();

    // Lesson 2: arithmetic operators, streams and chained output.
    lessons::runOperators();

    // Lesson 3: the labelled exercises (tax, input, temperature, math).
    lessons::runExercises();

    // Lesson 4: built-in data types, literals, brace init, typedef.
    lessons::runDataTypes();

    // Lesson 5: random numbers and the dice-roll exercise.
    lessons::runRandomNumbers();

    // ============================================================
    // END OF PROGRAM
    // ============================================================

    // Returning 0 indicates successful program completion.
    return 0;
}
