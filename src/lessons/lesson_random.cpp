#include "lesson_random.h"

#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

namespace lessons
{
    void runRandomNumbers()
    {
        // ========================================================
        // GENERATE RANDOM NUMBERS
        // ========================================================

        // Random number generator.
        // seed random helps us to get different random numbers.
        srand(time(0));

        // The modulus is used to add the upper limit making the
        // lower limit 0 (0-9).
        // We can add 1 so that it will be between 1 and 10.
        int randNum = rand() % 10;
        cout << randNum << endl;


        // ========================================================
        // PROGRAM EXERCISE: ROLL DICE
        // ========================================================

        constexpr short minValue = 1;
        constexpr short maxValue = 6;

        srand(time(0));
        short rand1 = (rand() % (maxValue - minValue + 1)) + minValue;
        short rand2 = (rand() % (maxValue - minValue + 1)) + minValue;

        cout << "Your dice numbers are: " << rand1 << " and " << rand2 << endl;
    }
}
