
/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 6th Edition
 Chapter 2 - Exercise 12
 markdhoad@gmail.com
 
 Write a program that prompts the capacity, in gallons, of an automobile fuel tank 
 and the miles per gallon the automobile can be driven. 
 
 The program outputs the number of miles the automobile can be
 driven without refueling.

*****************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int milesPerGallon, tankCapacity;
    
    cout << "Please enter the capacity of the tank: ";
    cin >> tankCapacity;
    
    cout << "Please enter the miles per gallons: ";
    cin >> milesPerGallon;
    
    cout << "This mean that you can drive " << tankCapacity * milesPerGallon << " miles on a full tank." << endl;
    
    return 0;
}