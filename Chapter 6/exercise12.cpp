/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 5th Edition
 Chapter 6 - Exercise 12
 markdhoad@gmail.com
 
 During the tax season, every Friday, J&J accounting firm provides assistance to 
 people who prepare their own tax returns.
 Their charges are as follows.
 
 a. If a person has low income (<= 25,000) and the consulting time is less
 than or equal to 30 minutes, there are no charges; otherwise, the service 
 charges are 40% of the regular hourly rate for the time over 30 minutes.
 b. For others, if the consulting time is less than or equal to 20 minutes, 
 there are no service charges; otherwise, service charges are 70% of the regular 
 hourly rate for the time over 20 minutes.
 
 For example, suppose that a person has low income and spent 1 hour and 15 minutes, 
 and the hourly rate is $70.00. Then the billing amount is 70.00 * 0.40 * (45 / 60) = $21.00.
 
 Write a program that prompts the user to enter the hourly rate, the total consulting time, 
 and whether the person has low income.
 
 The program should output the billing amount. Your program must contain a function that
 takes as input the hourly rate, the total consulting time, and a value indicating whether 
 the person has low income. The function should return the billing amount.
 
 Your program may prompt the user to enter the consulting time in minutes.
 *****************************************************************************/


#include <iostream>
#include <iomanip>

using namespace std;

double calculateBill(int income, int consultingMinutes, double hourlyRate);

int main()
{
    int income, consultingMinutes;
    double hourlyRate;
    
    cout << "Please enter the clients income: $" ;
    cin >> income;
    cout << "Please enter the consulting time in minutes: ";
    cin >> consultingMinutes;
    cout << "Please enter the hourly rate: $";
    cin >> hourlyRate;
    cout << fixed << showpoint << setprecision(2);
    cout << "Your total bill ammount comes to: $" << calculateBill(income, consultingMinutes, hourlyRate) << endl;
    return 0;
}

double calculateBill(int income, int consultingMinutes, double hourlyRate){
    if (income <= 25000) {
        if (consultingMinutes <= 30)
            return 0;
        else
            return hourlyRate * 0.40 * ((consultingMinutes - 30) / 60);
    }
    else {
        if (consultingMinutes <= 20)
            return 0;
        else 
            return hourlyRate * 0.70 * ((consultingMinutes - 20) / 60);
        
        }
}
