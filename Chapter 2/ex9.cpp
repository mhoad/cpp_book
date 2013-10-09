
/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 6th Edition
 Chapter 2 - Exercise 9
 markdhoad@gmail.com
 
 Write a program that prompts the user to enter five test scores and then prints 
 the average test score. (Assume that the test scores are decimal numbers.)

*****************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    double test1, test2, test3, test4, test5;
    
    cout << "Please enter 5 test scores as decimals \n";
    cin >> test1 >> test2 >> test3 >> test4 >> test5;
    double average = (test1 + test2 + test3 + test4 + test5) / 5;
    
    cout << "The average test score is: " << average << endl;
    
    return 0;
}