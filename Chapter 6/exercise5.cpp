/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 3rd Edition
 Chapter 6 - Exercise 5
 markdhoad@gmail.com
 
 Write a function reverseDigit, that takes an integer as a parameter and returns
 the number with its digits reversed. For example the value of reverseDigit(5600)
 is 65, the value of reverseDigit(7008) is 8007; and the value of 
 reverseDigit(-532) is -235
*****************************************************************************/

#include <iostream>

using namespace std;

int reverseDigit(int x);

int main()
{
  cout << "5600 = " << reverseDigit(5600) << endl;
  cout << "7008 = " << reverseDigit(7008) << endl;
  cout << "-532 = " << reverseDigit(-532) << endl;
  return 0;
}

int reverseDigit(int x)
{
  // Algorithm adapted from 
  // https://www.programiz.com/cpp-programming/examples/reverse-number
  int remainder, reversedNumber = 0;
  while(x != 0)
    {
        remainder = x%10;
        reversedNumber = reversedNumber*10 + remainder;
        x /= 10;
    }

  return reversedNumber;
}