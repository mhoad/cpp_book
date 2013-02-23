/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 5th Edition
 Chapter 6 - Exercise 10
 markdhoad@gmail.com
 
 Write a program that takes as input five numbers and outputs the mean (average) 
 and standard deviation of the numbers.
 *****************************************************************************/


#include <iostream>
#include <cmath>

using namespace std;

double mean(int num1, int num2, int num3, int num4, int num5);
double stddev(int num1, int num2, int num3, int num4, int num5);

int main()
{
    int num1, num2, num3, num4, num5;
    
    cout << "Please enter 5 numbers seperated by spaces: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    cout << "The average is: " << mean(num1, num2, num3, num4, num5) << endl;
    cout << "The standard deviation is: " << stddev(num1, num2, num3, num4, num5) << endl;
    return 0;
}

double mean(int num1, int num2, int num3, int num4, int num5) {
    return ((num1 + num2 + num3 + num4 + num5)/5);
}

double stddev(int num1, int num2, int num3, int num4, int num5) {
    double average = mean(num1, num2, num3, num4, num5);
    double numerator = (pow(num1 - average, 2) + pow(num2 - average, 2) + pow(num3 - average, 2) + pow(num4 - average, 2) + pow(num5 - average, 2));
    return sqrt(numerator/5);
}