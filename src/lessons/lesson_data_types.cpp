#include "lesson_data_types.h"

#include <iostream>

using namespace std;

namespace lessons
{
    void runDataTypes()
    {
        // ========================================================
        // BASIC BUILT-IN DATA TYPES
        // ========================================================

        // C++ is statistically-typed because we need to specify
        // every data type for a variable and it can not be changed.

        // int(4 bytes)-long(4 bytes)-short(2 bytes)-long long(8 bytes)
        // double(8 bytes)-long double(8 bytes)-float(4 bytes)
        // bool(1 byte) -true/false
        // char(1 byte)

        float interestRate = 3.67F; // The F or f is used to prevent Data loss
        long fileSize = 90000L;     // Prevent reading as an integer
        char letter = 'a';
        bool isValid = false;

        // Auto is used to automatically get the data type making dynamic
        auto dataType = 8.0l;


        // ========================================================
        // BRACE INITIALISATION
        // ========================================================

        // It returns an error if the same data type was not assigned.
        constexpr int numbers{2}; // Makes 0 initialisation for empty braces
        cout << numbers << endl;


        // ========================================================
        // BINARY, HEXADECIMAL AND DIGIT SEPARATORS
        // ========================================================

        int bNumber = 0b11111111;
        int hNumber = 0xFF;
        cout << bNumber << endl
             << hNumber << endl;

        int comNumber = 1'000'000;
        cout << comNumber << endl;

        // Hexadecimal numbers are used for colors in C++

        // Narrowing


        // ========================================================
        // TYPEDEF
        // ========================================================

        typedef float jaysfloat_t;

        jaysfloat_t myFloat = 3.14f;
        std::cout << myFloat << std::endl;
    }
}
