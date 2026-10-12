#include "lesson_operators.h"

#include <iostream>

using namespace std;

namespace lessons
{
    void runOperators()
    {
        // ========================================================
        // SECTION 6: ARITHMETIC OPERATORS
        // ========================================================

        // % gives the remainder after division.

        double x = 10;
        int y = 5;

        double z = (x + 10) / (3 * y);

        // Decrement x by 1.
        --x;

        // Increment x by 1.
        ++x;

        cout << "z = " << z << endl;


        // ========================================================
        // SECTION 7: STREAMS AND CHAINING OUTPUT
        // ========================================================

        // A stream can be thought of as a sequence of characters
        // moving between the program and another destination.
        //
        // cout sends output to the console.
        // cin receives input from the console.

        int f = 10;
        int g = 5;

        cout << "g = " << g << endl
             << "f = " << f << endl;
    }
}
