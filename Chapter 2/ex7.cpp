
/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 5th Edition
 Chapter 2 - Exercise 7
 markdhoad@gmail.com
 
 Write a program that prompts the user to input a decimal number and
 outputs the number rounded to the nearest integer.

*****************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double userNumber;

  cout << "Enter a decimal number: ";
  cin >> userNumber;

  cout << setprecision(0) << userNumber << endl;

  return 0;
}