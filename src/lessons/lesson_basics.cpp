#include "lesson_basics.h"

#include "../common/constants.h"

#include <iostream>

using namespace std;

namespace lessons
{
    void runBasics()
    {
        // ========================================================
        // SECTION 1: CONSTANTS WITH constexpr
        // ========================================================

        // constexpr means the value is a compile-time constant.
        constexpr int file_size = 0;
        constexpr double salesPrice = 9.99;

        cout << file_size << endl;
        cout << salesPrice << endl;


        // ========================================================
        // SECTION 2: BASIC OUTPUT
        // ========================================================

        // cout sends output to the console.
        // << is called the stream insertion operator.
        cout << "Hello World!" << endl;

        // \n can also be used to move to a new line.
        cout << "This is another line.\n";


        // ========================================================
        // SECTION 3: SWAPPING VARIABLES
        // ========================================================

        int a = 1;
        int b = 2;

        // Temporary variable stores the original value of a.
        int c = a;

        // Put b's value into a.
        a = b;

        // Put the original value of a into b.
        b = c;

        cout << "a = " << a << endl;
        cout << "b = " << b << endl;


        // ========================================================
        // SECTION 4: constexpr
        // ========================================================

        // pi is a constant and cannot be changed.
        // It is declared once in src/common/constants.h so that the
        // exercises can reuse the exact same value.
        //
        // This would produce an error:
        // pi = pi + 1;

        cout << "pi = " << constants::pi << endl;


        // ========================================================
        // SECTION 5: NAMING CONVENTIONS
        // ========================================================

        // Snake case:
        // student_name

        // Pascal case:
        // StudentName

        // Camel case:
        // studentName
    }
}
