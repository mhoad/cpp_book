
/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 6th Edition
 Chapter 2 - Exercise 10
 markdhoad@gmail.com
 
 Write a program that prompts the user to input five decimal numbers. 
 The program should then add the five decimal numbers, convert the sum 
 to the nearest integer, and print the result.

*****************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    double test1, test2, test3, test4, test5;
    
    cout << "Please enter 5 decimal numbers: \n";
    cin >> test1 >> test2 >> test3 >> test4 >> test5;
    double total = test1 + test2 + test3 + test4 + test5;
    
    cout << "The total of all the numbers is: " << static_cast<int>(total) << endl;
    
    return 0;
}