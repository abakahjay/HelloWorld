#include "lesson_exercises.h"

#include "../common/constants.h"

#include <cmath>
#include <iostream>
#include <string>

using namespace std;

namespace lessons
{
    // ============================================================
    // EXERCISE 1: SALES TAX CALCULATOR
    // ============================================================
    void runSalesTaxExercise()
    {
        // Total sales.
        constexpr double sales = 95000;

        // Calculate 4% state tax.
        double stateTax = sales * 0.04;

        // Calculate 2% county tax.
        double countyTax = sales * 0.02;

        cout << "stateTax = $" << stateTax << endl
             << "countyTax = $" << countyTax << endl
             << "sales = $" << sales << endl;
    }


    // ============================================================
    // EXERCISE 2: GET DATA FROM THE USER
    // ============================================================
    void runUserInputExercise()
    {
        string somethings;

        cout << "Please Enter Your Name: ";

        // cin >> reads one whitespace-separated word.
        cin >> somethings;

        cout << "Your name is: " << somethings << endl;

        // IMPORTANT:
        // If the user enters:
        // Abakah Joshua Blessed
        //
        // cin >> somethings stores only:
        // Abakah
        //
        // To read the entire line, use:
        //
        // getline(cin, somethings);
    }


    // ============================================================
    // EXERCISE 3: FAHRENHEIT TO CELSIUS
    // ============================================================
    void runTemperatureExercise()
    {
        double temp;

        // Ask the user for the temperature.
        cout << "Please enter the temperature in Fahrenheit: ";

        // Get the temperature from the user.
        cin >> temp;

        // Convert Fahrenheit to Celsius.
        //
        // Formula:
        // Celsius = (Fahrenheit - 32) * 5 / 9
        //
        // 5.0 / 9.0 is used so C++ performs decimal division.
        double celsius = (temp - 32) * (5.0 / 9.0);

        // Display the converted temperature.
        cout << "Your temperature is: "
             << celsius
             << " Celsius"
             << endl;
    }


    // ============================================================
    // EXERCISE 4: <cmath> HELPERS AND CIRCLE AREA
    // ============================================================
    void runMathExercise()
    {
        double result = floor(1.2);
        double resultC = ceil(1.2);
        double resultD = pow(2, 3);

        std::cout << result << std::endl;
        cout << resultC << endl;
        std::cout << resultD << endl;

        // const double pi = 3.14;
        double radius;
        cout << "Please Enter Your Radius: ";
        cin >> radius;

        double area = constants::pi * pow(radius, 2);
        cout << "Your area is: " << area << endl;

        // Writing comments
        /*What do you want me to do*/
    }


    void runExercises()
    {
        runSalesTaxExercise();
        runUserInputExercise();
        runTemperatureExercise();
        runMathExercise();
    }
}
