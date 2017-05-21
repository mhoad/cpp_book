/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 5th Edition
 Chapter 4 - Exercise 10
 markdhoad@gmail.com
 
 Redo Chapter 4 Exercise 9 to handle floating-point numbers. 
 (Format your output to two decimal places.)
 *****************************************************************************/


#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    float numerator, denominator;
    char operation;
    
    cout << "Enter your calculation: ";
    cin >> numerator >> operation >> denominator;

    cout << fixed << showpoint << setprecision(2);
    
    switch (operation) {
        case 'x':
        case '*':
            cout << numerator * denominator << endl;
            break;
        case '+':
            cout << numerator + denominator << endl;
            break;
        case '-':
            cout << numerator - denominator << endl;
            break;
        case '/':
        case '%':
            if (numerator == 0 || denominator == 0) {
                cout << "Cannot divide by zero" << endl;
                return 1;
            }
            cout << numerator / denominator << endl;
            break;
        default:
            cout << "There was an error with your input" << endl;
            return 1;
            break;
    }
    
    return 0;
}