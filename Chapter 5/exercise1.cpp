/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 5th Edition
 Chapter 5 - Exercise 1
 markdhoad@gmail.com
 
 Write a program that prompts the user to input an integer and then outputs both the individual 
 digits of the number and the sum of the digits. For example, it should output the individual 
 digits of 3456 as 3 4 5 6, output the individual digits of 8030 as 8 0 3 0, output the individual 
 digits of 2345526 as 2 3 4 5 5 2 6, output the individual digits of 4000 as 4 0 0 0, and 
 output the individual digits of -2345 as 2 3 4 5.
 *****************************************************************************/


#include <iostream> 
#include <cstdlib>

using namespace std;

int main()
{
    int inputNumber, sum, individualNumber;
    cin >> inputNumber;

    inputNumber = abs(inputNumber); //Handle negative numbers
    sum = 0;
    
    do {
        individualNumber = inputNumber % 10; //Extract the last digit of the number
        sum += individualNumber;
        inputNumber = inputNumber / 10; //Remove the last digit
    } while (inputNumber > 0);

    cout << "The sum of the individual numbers is: " << sum << endl;
    
    
    return 0;
}