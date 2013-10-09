/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 6th Edition
 Chapter 2 - Exercise 14
 markdhoad@gmail.com
 
 Write a C++ program that prompts the user to input the elapsed time for an
 event in hours, minutes, and seconds.
 
 The program then outputs the elapsed time in seconds.
 
 *****************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int hours, minutes, seconds, totalSeconds;
    const int secondsPerMinute = 60;
    const int secondsPerHour = 60 * secondsPerMinute;
    
    cout << "Please input the hours minutes and seconds: ";
    cin >> hours >> minutes >> seconds;
    
    totalSeconds = seconds + (minutes * secondsPerMinute) + (hours * secondsPerHour);
    
    cout << "That equals a total of " << totalSeconds << " seconds." << endl;
    
    return 0;
}