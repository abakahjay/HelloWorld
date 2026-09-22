#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

// ================================================================
// C++ CODING LESSON — FUNDAMENTALS
// ================================================================
// This file contains everything covered so far, organized into
// sections and labeled exercises.
// ================================================================

int main()
{
    // ============================================================
    // SECTION 1: CONSTANTS WITH constexpr
    // ============================================================

    // constexpr means the value is a compile-time constant.
    constexpr int file_size = 0;
    constexpr double salesPrice = 9.99;

    cout << file_size << endl;
    cout << salesPrice << endl;


    // ============================================================
    // SECTION 2: BASIC OUTPUT
    // ============================================================

    // cout sends output to the console.
    // << is called the stream insertion operator.
    cout << "Hello World!" << endl;

    // \n can also be used to move to a new line.
    cout << "This is another line.\n";


    // ============================================================
    // SECTION 3: SWAPPING VARIABLES
    // ============================================================

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


    // ============================================================
    // SECTION 4: constexpr
    // ============================================================

    // pi is a constant and cannot be changed.
    constexpr double pi = 22.0/7.0;

    // This would produce an error:
    // pi = pi + 1;

    cout << "pi = " << pi << endl;


    // ============================================================
    // SECTION 5: NAMING CONVENTIONS
    // ============================================================

    // Snake case:
    // student_name

    // Pascal case:
    // StudentName

    // Camel case:
    // studentName


    // ============================================================
    // SECTION 6: ARITHMETIC OPERATORS
    // ============================================================

    // % gives the remainder after division.

    double x = 10;
    int y = 5;

    double z = (x + 10) / (3 * y);

    // Decrement x by 1.
    --x;

    // Increment x by 1.
    ++x;

    cout << "z = " << z << endl;


    // ============================================================
    // SECTION 7: STREAMS AND CHAINING OUTPUT
    // ============================================================

    // A stream can be thought of as a sequence of characters
    // moving between the program and another destination.
    //
    // cout sends output to the console.
    // cin receives input from the console.

    int f = 10;
    int g = 5;

    cout << "g = " << g << endl
         << "f = " << f << endl;


    // ============================================================
    // EXERCISE 1: SALES TAX CALCULATOR
    // ============================================================

    // Total sales.
    constexpr double sales = 95000;

    // Calculate 4% state tax.
    double stateTax = sales * 0.04;

    // Calculate 2% county tax.
    double countyTax = sales * 0.02;

    cout << "stateTax = $" << stateTax << endl
         << "countyTax = $" << countyTax << endl
         << "sales = $" << sales << endl;


    // ============================================================
    // EXERCISE 2: GET DATA FROM THE USER
    // ============================================================

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


    // ============================================================
    // EXERCISE 3: FAHRENHEIT TO CELSIUS
    // ============================================================

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
     double result=floor(1.2);
    double resultC=ceil(1.2);
    double resultD=pow(2,3);
    std::cout<<result<<std::endl;
    cout<<resultC<<endl;
    std::cout<<resultD<<endl;

    // const double pi = 3.14;
    double radius ;
    cout << "Please Enter Your Radius: ";
    cin >> radius;
    double area = pi*pow(radius,2);
    cout << "Your area is: " << area << endl;

    //Writing comments
    /*What do you want me to do*/

    //Basic Built-in Data Types
    //C++ is statistically-typed because we need to specify
    //every data type for a variable a d it can not be changed

    //int(4 bytes)-long(4 bytes)-short(2 bytes)-long long(8 bytes)
    //double(8 bytes)-long double(8 bytes)-float(4 bytes)
    //bool(1 byte) -true/false
    //char(1 byte)

    float interestRate = 3.67F;//The F or f is used to prevent Data loss
    long fileSize = 90000L;//Prevent reading as an integer
    char letter = 'a';
    bool isValid = false;
    //Auto is used to automatically get the data type making dynamic
    auto dataType = 8.0l;

    //Brace initialisation
    //It returns an error if the same data type was not assigned
    constexpr int numbers  {2};//Makes 0 initialisation for empty braces
    cout << numbers<< endl;

    int bNumber = 0b11111111;
    int hNumber = 0xFF;
    cout << bNumber << endl
         << hNumber << endl;

    int comNumber =1'000'000;
    cout << comNumber << endl;


    //Hexadecimal numbers are used for colors in C++

     //Narrowing

    //Generate Random Numbers
    //Random number generator
    srand(time(0));//seed random helps us to get different random numbers

    int randNum = rand() % 10;//the modulus is used to add the upper limit making the lower limit 0(0-9)
    //we can add 1 so that it will be between 1 and 10
    cout << randNum << endl;

    //Program exercise to roll  dice
    constexpr short minValue=1;
    constexpr short maxValue=6;

    srand(time(0));
    short rand1 = (rand() % (maxValue-minValue+1))+minValue;
    short rand2 = (rand() % (maxValue-minValue+1))+minValue;

    cout<< "Your dice numbers are: " << rand1 <<" and " <<rand2<<endl;






    // ============================================================
    // IMPORTANT CONCEPTS LEARNED
    // ============================================================

    // 1. #include
    // 2. <iostream>
    // 3. <string>
    // 4. using namespace std
    // 5. main()
    // 6. return 0
    // 7. Variables
    // 8. Data types
    // 9. int
    // 10. double
    // 11. string
    // 12. Variable initialization
    // 13. constexpr
    // 14. const
    // 15. cout
    // 16. cin
    // 17. endl
    // 18. \n
    // 19. << stream insertion operator
    // 20. >> input/extraction operator
    // 21. Streams
    // 22. Arithmetic operators
    // 23. %
    // 24. ++
    // 25. --
    // 26. Prefix and postfix
    // 27. Naming conventions
    // 28. Swapping variables
    // 29. User input
    // 30. cin >> string
    // 31. getline()
    // 32. Integer division
    // 33. Decimal division
    // 34. Temperature conversion
     //35. Writing to console


    // ============================================================
    // END OF PROGRAM
    // ============================================================



    // Returning 0 indicates successful program completion.
    return 0;
}
