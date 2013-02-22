/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 5th Edition
 Chapter 5 - Exercise 6
 markdhoad@gmail.com
 
 Write a program that reads a set of integers and then finds and prints the 
 sum of the even and odd integers.
 
 Note: I haven't bothered to do any error or input checking 
 *****************************************************************************/


#include <iostream>

using namespace std;

int main()
{
    int numberOfNumbers, totalOddNumbers, totalEvenNumbers, sumOfNumbers, currentNumber;
    
    totalEvenNumbers = 0; totalOddNumbers = 0; sumOfNumbers = 0; //initilise required variables
    
    cout << "How many numbers will you be entering: ";
    cin >> numberOfNumbers;
    
    for (int i = 0; i <= numberOfNumbers-1; i++) {
        cin >> currentNumber;
        if (currentNumber % 2 == 0) {
            totalEvenNumbers += 1;
            sumOfNumbers += currentNumber;
        } else {
            totalOddNumbers += 1;
            sumOfNumbers += currentNumber;
        }
    }
    
    cout << "The sum of the " << numberOfNumbers << " numbers is: " << sumOfNumbers << endl;    
    cout << "There were " << totalOddNumbers << " odd numbers and " << totalEvenNumbers << " even numbers" << endl;
    
    return 0;
}