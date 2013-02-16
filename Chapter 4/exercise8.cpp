/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 5th Edition
 Chapter 4 - Exercise 8
 markdhoad@gmail.com
 
 Write a program that mimics a calculator. The program should take as input two integers and the
 operation to be performed. It should then output the numbers, the operator, and the result. 
 (For division, if the denominator is zero, output an appropriate message.) 
 Some sample outputs follow:
 3+4=7 13 *5=65
*****************************************************************************/


#include <iostream>

using namespace std;
int main()
{
    int numerator, denominator;
    char operation;
    
    cout << "Enter your calculation: ";
    cin >> numerator >> operation >> denominator;
    
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
        default:
            cout << "There was an error with your input" << endl;
            return 1;
            break;
    }
    
    return 0;
}