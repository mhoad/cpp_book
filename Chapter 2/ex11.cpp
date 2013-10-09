
/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 6th Edition
 Chapter 2 - Exercise 11
 markdhoad@gmail.com
 
 Write a program that does the following:
    a. Prompts the user to input five decimal numbers.
    b. Prints the five decimal numbers.
    c. Converts each decimal number to the nearest integer.
    d. Adds the five integers.
    e. Prints the sum and average of the five integers.

*****************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    double test1, test2, test3, test4, test5;
    int int1, int2, int3, int4, int5;
    
    cout << "Please enter 5 decimal numbers: \n";
    cin >> test1 >> test2 >> test3 >> test4 >> test5;
    cout << test1 << " " << test2 << " " << test3 << " " << test4 << " " << test5 << endl;
    
    int1 = static_cast<int>(test1);
    int2 = static_cast<int>(test2);
    int3 = static_cast<int>(test3);
    int4 = static_cast<int>(test4);
    int5 = static_cast<int>(test5);
    
    
    int total = int1 + int2 + int3 + int4 + int5;
    double average = (int1 + int2 + int3 + int4 + int5) / 5;
    
    cout << "The total of all the numbers is: " << total << endl;
    cout << "The average of all the numbers is: " << average << endl;
    
    return 0;
}