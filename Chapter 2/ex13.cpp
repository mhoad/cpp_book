
/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 6th Edition
 Chapter 2 - Exercise 13
 markdhoad@gmail.com
 
 Write a C++ program that prompts the user to input the elapsed time for an 
 event in seconds. 
 
 The program then outputs the elapsed time in hours, minutes,
 and seconds. (For example, if the elapsed time is 9630 seconds, 
 then the output is 2:40:30.)
 
 *****************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int secondsElapsed, hours, minutes, seconds;
    
    const int secondsPerMinute = 60;
    const int secondsPerHour = 60 * secondsPerMinute;
    
    cout << "Please enter the number of seconds elapsed: ";
    cin >> secondsElapsed;
    
    hours = secondsElapsed / secondsPerHour;
    secondsElapsed = secondsElapsed % secondsPerHour;
    minutes = secondsElapsed / secondsPerMinute;
    seconds = secondsElapsed % secondsPerMinute;
    
    cout << hours << ":" << minutes << ":" << seconds << endl;
    return 0;
}