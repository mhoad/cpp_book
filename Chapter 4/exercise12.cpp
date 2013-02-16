/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 5th Edition
 Chapter 4 - Exercise 12
 markdhoad@gmail.com
 
 A bank in your town updates its customers’ accounts at the end of each month. 
 The bank offers two types of accounts: savings and checking.
 Every customer must maintain a minimum balance. If a customer’s balance falls below the
 minimum balance, there is a service charge of $10.00 for savings accounts and $25.00 for
 checking accounts. If the balance at the end of the month is at least the minimum balance, 
 the account receives interest as follows:
 
 * Savings accounts receive 4% interest.
 * Checking accounts with balances of up to $5,000 more than the
   minimum balance receive 3% interest; otherwise, the interest is 5%.
 
 Write a program that reads a customer’s account number (int type), account type 
 (char) s for savings, c for checking, minimum balance that the account should maintain, 
 and current balance. The program should then output the account number, account type,
 current balance, and an appropriate message. 
 
 Test your program by running it five times,using the following data:
 
 46728 S 1000 2700
 87324 C 1500 7689
 79873 S 1000 800
 89832 C 2000 3000
 98322 C 1000 750
 *****************************************************************************/


#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int accountNumber;
    float minimumBalance, currentBalance;
    char accountType;
    
    const float SAVINGS_SERVICE_CHARGE = 10.00;
    const float CHECKING_SERVICE_CHARGE = 25.00;
    const float SAVINGS_INTEREST_RATE = 0.04;
    const float CHECKING_LOW_INTEREST_RATE = 0.03;
    const float CHECKING_DEFAULT_INTEREST_RATE = 0.05;
    
    cout << "Please enter the account details: ";
    cin >> accountNumber >> accountType >> minimumBalance >> currentBalance;
    
    switch (accountType) {
        case 's':
        case 'S':
            cout << "Account Number: " << accountNumber << endl;
            cout << fixed << showpoint << setprecision(2);
            cout << "Account Type: Savings" << endl;
            cout << "Minimum Balance: $" << minimumBalance << endl;
            cout << "Current Balance: $" << currentBalance << endl;
            
            if (currentBalance < minimumBalance) {
                cout << "Service Fee: $" << SAVINGS_SERVICE_CHARGE << endl;
            } else {
                cout << "Interest Earned: $" << currentBalance * SAVINGS_INTEREST_RATE
                << " at " << SAVINGS_INTEREST_RATE*100 << "% p.a" << endl;
            }
            break;
        case 'c':
        case 'C':
            cout << "Account Number: " << accountNumber << endl;
            cout << fixed << showpoint << setprecision(2);
            cout << "Account Type: Checking" << endl;
            cout << "Minimum Balance: $" << minimumBalance << endl;
            cout << "Current Balance: $" << currentBalance << endl;
            
            if (currentBalance < minimumBalance) {
                cout << "Service Fee: $" << CHECKING_SERVICE_CHARGE << endl;
            } else if (currentBalance <= (minimumBalance + 5000.00)) {
                cout << "Interest Earned: $" << currentBalance * CHECKING_LOW_INTEREST_RATE
                << " at " << CHECKING_LOW_INTEREST_RATE*100 << "% p.a" << endl;
            } else {
                cout << "Interest Earned: $" << currentBalance * CHECKING_DEFAULT_INTEREST_RATE
                << " at " << CHECKING_DEFAULT_INTEREST_RATE*100 << "% p.a" << endl;
            }
            break;
        default:
            cout << "There was an error with your input" << endl;
            return 1;
            break;
    }
    
    return 0;
}