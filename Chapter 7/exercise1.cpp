/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 5th Edition
 Chapter 7 - Exercise 1
 markdhoad@gmail.com
 
 a) Write the definition of the function initialize that initializes x and y 
 to 0 and z to the blank character.
 
 b) Write the definition of the function getHoursRate that prompts the user to 
 input the hours worked and rate per hour to initialize the variables hours and 
 rate of the function main.
 
 c) Write the definition of the value-returning function payCheck that calculates 
 and returns the amount to be paid to an employee based on the hours worked and 
 rate per hour. The hours worked and rate per hour are stored in the variables hours 
 and rate, respectively, of the function main. The formula for calculating the amount 
 to be paid is as follows: For the first 40 hours, the rate is the given rate; for 
 hours over 40, the rate is 1.5 times the given rate.
 
 d) Write the definition of the function printCheck that prints the hours worked, 
 rate per hour, and the salary.
 
 e) Write the definition of the function funcOne that prompts the user to input a number. 
 The function then changes the value of x by assigning the value of the expression 2 
 times the (old) value of x plus the value of y minus the value entered by the user.
 
 f) Write the definition of the function nextChar that sets the value of z to the 
 next character stored in z.
 
 g) Write the definition of a function main that tests each of these functions.
 *****************************************************************************/


#include <iostream>
#include <iomanip>

using namespace std;

void initialise(int& x, int& y, char& z);
void getHoursRate(double& rate, double& hours);
double payCheck(double rate, double hours);
void printCheck(double rate, double hours, double amount);
void funcOne(int& x, int y);
void nextChar(char& z);

int main()
{
    int x, y;
    char z;
    double rate, hours;
    double amount;
    
    initialise(x, y, z);
    getHoursRate(rate, hours);
    amount = payCheck(rate, hours);
    printCheck(rate, hours, amount);
    cout << "The value of x is currently: " << x << endl;
    funcOne(x, y);
    cout << "The value of x is now: " << x << endl;
    nextChar(z);
    cout << "The value of z is now: " << z << endl;
    
    return 0;
}

void initialise(int& x, int& y, char& z) {
    x = 0;
    y = 0;
    z = ' ';
}

void getHoursRate(double& rate, double& hours) {
    cout << "Please enter the hourly rate: ";
    cin >> rate;
    cout << "Please enter the hours worked: ";
    cin >> hours;
}

double payCheck(double rate, double hours) {
    double amount = 0;
    
    if (hours > 40) {
        amount += ((hours - 40) * rate) * 1.5;
        amount += 40 * rate;
        return amount;
    } else {
        amount = hours * rate;
        return amount;
    }
}

void printCheck(double rate, double hours, double amount) {
    cout << "For working " << hours << " hours at $" << rate << "/hr you get a total of $";
    cout << fixed << showpoint << setprecision(2);
    cout << amount << endl;
}

void funcOne(int& x, int y) {
    int tempNum;
    cout << "Please enter a number: ";
    cin >> tempNum;
    
    x = (x * 2) + y - tempNum;
}

void nextChar(char& z) {
    z++;
}