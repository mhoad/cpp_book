/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 5th Edition
 Chapter 6 - Exercise 4
 markdhoad@gmail.com
 
 Write the definition of function one so that it returns the sum of x and y if 
 x is greater than y; otherwise it should return x minus 2 times y.

 Write the definition of function two as follows:
  1) Read a number and store it in z
  2) Update the value of z by adding the value of a to its previous value
  3) Assign the variable first the value returned by function one with params 6 & 8
  4) Update the value of first by adding the value of x to its previous value
  5) If the value of z is more than twice the value of first return z; otherwise
     return 2 times first minus z

 Write a program that tests the above. Declare extra variables if needed.
*****************************************************************************/

#include <iostream>

using namespace std;

int one(int x, int y);
double two(int x, double a);

int main()
{
  int num;
  double dec;

  num = one(5, 6);
  dec = two(6, 3.4);

  cout << "The num variable = " << num << endl;
  cout << "The dec variable = " << dec << endl;

  
  return 0;
}

int one(int x, int y)
{
  if (x > y)
    return x+y;
  else
    return (x-2)*y;
}

double two(int x, double a)
{
  int first;
  double z;

  cout << "Enter a number: ";
  cin >> z;

  z += a;
  first = one(6,8);
  first += x;

  if (z > (2 * first))
    return z;
  else
    return 2*first - z;
}