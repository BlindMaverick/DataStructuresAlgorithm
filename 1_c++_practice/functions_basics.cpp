#include <bits/stdc++.h>
using namespace std;
// Function are set of code which performs a specific task.
// Functions are used to modularize the code and make it reusable.
// Function are used to increase the readability of the code.
// Types of Functions:
// 1. Built-in Functions: These are the functions that are already defined in the C++
//    standard library. For example, cout, cin, sqrt, etc.
// 2. User-defined Functions: These are the functions that are defined by the user.
//    User-defined functions can be further classified into:
//    a. Function with no arguments and no return value (void functions)
//    b. Function with arguments and no return value (void functions)
//    c. Function with no arguments and return value (int, float, etc.)
//    d. Function with arguments and return value (int, float, etc.)

void printName()
{
    cout << "Hello, Vishruth!" << endl;
}

void printSum(int a, int b)
{
    cout << "Sum: " << a + b << endl;
}

int printRandomNumber()
{
    return rand() % 100; // Returns a random number between 0 and 99
}

int printSquare(int x)
{
    return x * x;
}

void doSomething(int value)
{
    value += 10;
    cout << "Value inside doSomething(by value): " << value << endl;
}

void doSomethingRef(int &value)
{
    value += 10;
    cout << "Value inside doSomething (by reference): " << value << endl;
}

int main()
{
    // Function Basics
    cout << "Function Basics Example" << endl;
    cout << "------------------------" << endl;
    // Calling a function with no arguments and no return value
    cout << "function with no arguments and no return value Example" << endl;
    cout << "--------------------------------------------------------" << endl;
    printName();
    cout << endl;

    // Calling a function with arguments and no return value
    cout << "Function with arguments and no return value Example" << endl;
    cout << "----------------------------------------------------" << endl;
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;
    printSum(x, y);
    cout << endl;

    // Function with return value
    cout << "Function with return value Example" << endl;
    cout << "-----------------------------------" << endl;
    int randomNumber = printRandomNumber();
    cout << "Random number generated: " << randomNumber << endl;

    // Function with arguments and return value
    cout << "Function with arguments and return value Example" << endl;
    cout << "-------------------------------------------------" << endl;
    int number;
    cout << "Enter an integer to find its square: ";
    cin >> number;
    int square = printSquare(number);
    cout << "Square of " << number << " is: " << square << endl;
    cout << "-------------------------------------------------" << endl;


    // Pass by value: The function receives a copy of the argument's value. 
    // Changes made to the parameter inside the function do not affect the original argument.
    int a = 5;
    cout << "Value of 'a' before doSomething: " << a << endl;
    // Function to demonstrate pass by value
    doSomething(a);
    cout << "Value of 'a' after doSomething: " << a << endl;
    cout << "-------------------------------------------------" << endl;


    // Pass by reference: The function receives a reference to the argument. 
    // Changes made to the parameter inside the function affect the original argument.
    int b = 10;
    int &refB = b; // refB is a reference to b
    cout << "Value of 'b' before doSomethingRef: " << b << endl;
    // Function to demonstrate pass by reference
    doSomethingRef(refB);
    cout << "Value of 'b' after doSomethingRef: " << b << endl;

    return 0;
}