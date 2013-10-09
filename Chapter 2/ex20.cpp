/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 6th Edition
 Chapter 2 - Exercise 20
 markdhoad@gmail.com
 
 You found an exciting summer job for five weeks. It pays, say, $15.50 per hour. 
 Suppose that the total tax you pay on your summer job income is 14%. 
 After paying the taxes, you spend 10% of your net income to buy new clothes and 
 other accessories for the next school year and 1% to buy school supplies. 
 After buying clothes and school supplies, you use 25% of the remaining money to 
 buy savings bonds. For each dollar you spend to buy savings bonds, your parents 
 spend $0.50 to buy additional savings bonds for you. 
 
 Write a program that prompts the user to enter the pay rate for an hour and the 
 number of hours you worked each week.
 
 The program then outputs the following:
    a. Your income before and after taxes from your summer job.
    b. The money you spend on clothes and other accessories.
    c. The money you spend on school supplies.
    d. The money you spend to buy savings bonds.
    e. The money your parents spend to buy additional savings bonds for you.
 
 *****************************************************************************/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double payRate, grossIncome, netIncome, schoolAmount, bondsAmount;
    double clothesAmount, parentsBondsAmount, hoursWorked;
    
    const double TAX_RATE = 0.14;
    const double CLOTHES_PERCENTAGE_OF_INCOME = 0.10;
    const double SCHOOL_PERCENTAGE_OF_INCOME = 0.01;
    const double SAVINGS_BONDS_PERCENTAGE_OF_INCOME = 0.25;
    const double PARENTS_CO_CONTRIBUTION_AMOUNT = 0.50;
    
    cout << "How many hours did you work: ";
    cin >> hoursWorked;
    
    cout << "What was the hourly rate: $";
    cin >> payRate;
    
    grossIncome = hoursWorked * payRate;
    netIncome = grossIncome *= TAX_RATE;
    clothesAmount = netIncome * CLOTHES_PERCENTAGE_OF_INCOME;
    schoolAmount = netIncome * SCHOOL_PERCENTAGE_OF_INCOME;
    netIncome -= (clothesAmount + schoolAmount); // Calculate what is now left
    bondsAmount = netIncome * SAVINGS_BONDS_PERCENTAGE_OF_INCOME;
    parentsBondsAmount = bondsAmount * PARENTS_CO_CONTRIBUTION_AMOUNT;
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << "Gross Income: $" << grossIncome << endl;
    cout << "Net Income: $" << netIncome << endl;
    cout << "Clothes & Accessories: $" << clothesAmount << endl;
    cout << "School Supplies: $" << schoolAmount << endl;
    cout << "Savings Bonds: $" << bondsAmount << endl;
    cout << "Parents Bonds Co-Contribution: $" <<parentsBondsAmount << endl;
    
    
    return 0;
}