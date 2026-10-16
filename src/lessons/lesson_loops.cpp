#include "lesson_loops.h"

#include <iostream>

using namespace std;

namespace lessons
{
    void runLoops()
    {
        // ========================================================
        // IF / ELSE IF / ELSE
        // ========================================================

        // Only the first condition that is true runs.
        int score = 72;
        if (score >= 80)
            cout << "Grade: A" << endl;
        else if (score >= 70)
            cout << "Grade: B" << endl;
        else if (score >= 60)
            cout << "Grade: C" << endl;
        else
            cout << "Grade: F" << endl;


        // ========================================================
        // SWITCH
        // ========================================================

        // switch compares one value against fixed cases.
        // Without break, the program "falls through" to the next case.
        int day = 3;
        switch (day)
        {
            case 1: cout << "Monday" << endl; break;
            case 2: cout << "Tuesday" << endl; break;
            case 3: cout << "Wednesday" << endl; break;
            default: cout << "Another day" << endl; break;
        }


        // ========================================================
        // FOR LOOP
        // ========================================================

        // for (start; condition; step) - use it when you know how
        // many times to repeat.
        for (int i = 1; i <= 5; i++)
            cout << i << " ";
        cout << endl;


        // ========================================================
        // WHILE AND DO-WHILE
        // ========================================================

        // while checks the condition first, so it may run 0 times.
        int countdown = 3;
        while (countdown > 0)
        {
            cout << "Countdown: " << countdown << endl;
            countdown--;
        }

        // do-while runs the body first, so it always runs at least once.
        int tries = 0;
        do
        {
            tries++;
        } while (tries < 3);
        cout << "Tried " << tries << " times" << endl;


        // ========================================================
        // BREAK AND CONTINUE
        // ========================================================

        // continue skips to the next round; break leaves the loop.
        for (int i = 1; i <= 10; i++)
        {
            if (i % 2 == 0) continue; // skip even numbers
            if (i > 7) break;         // stop after 7
            cout << i << " ";
        }
        cout << endl;


        // ========================================================
        // PROGRAM EXERCISE: MULTIPLICATION TABLE
        // ========================================================

        constexpr int table = 7;
        for (int i = 1; i <= 12; i++)
            cout << table << " x " << i << " = " << table * i << endl;


        // ========================================================
        // PROGRAM EXERCISE: FIZZBUZZ
        // ========================================================

        // Multiples of 3 print "Fizz", of 5 print "Buzz", of both
        // print "FizzBuzz"; check the "both" case first.
        for (int i = 1; i <= 15; i++)
        {
            if (i % 15 == 0) cout << "FizzBuzz";
            else if (i % 3 == 0) cout << "Fizz";
            else if (i % 5 == 0) cout << "Buzz";
            else cout << i;
            cout << (i < 15 ? ", " : "\n");
        }
    }
}
