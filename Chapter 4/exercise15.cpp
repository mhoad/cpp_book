/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 5th Edition
 Chapter 4 - Exercise 15
 markdhoad@gmail.com
 
 Write a program that calculates and prints the bill for a cellular telephone company. 
 The company offers two types of service: regular and premium. Its rates vary, depending 
 on the type of service. The rates are computed as follows:
 
 Regular Service:   $10.00 plus first 50 minutes are free. 
                    -   Charges for over 50 minutes are $0.20 per minute.
 Premium service:   $25.00 plus 
                    -   For calls made from 6:00 a.m. to 6:00 p.m.,the first 75 minutes are free;
                        charges for more than 75 minutes are $0.10 per minute.
                    -   For calls made from 6:00 p.m. to 6:00 a.m., the first 100 minutes are
                        free; charges for more than 100 minutes are $0.05 per minute.
 
 Your program should prompt the user to enter an account number, a service code (type char), 
 and the number of minutes the service was used. A service code of r or R means regular service; 
 a service code of p or P means premium service. Treat any other character as an error. 
 Your program should output the account number, type of service, number of minutes the 
 telephone service was used, and the amount due from the user.
 
 For the premium service, the customer may be using the service during the day and the night.
 Therefore, to calculate the bill, you must ask the user to input the number of minutes the service
 was used during the day and the number of minutes the service was used during the night.
 *****************************************************************************/


#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int accountNumber, regularMinutesUsed, premiumDayMinutes, premiumNightMinutes;
    float totalBill = 0;
    char serviceCode;
    
    const float REGULAR_ACCOUNT_FEE = 10.00;
    const float REGULAR_RATE = 0.20;
    const float PREMIUM_ACCOUNT_FEE = 25.00;
    const float PREMIUM_DAY_RATE = 0.10;
    const float PREMIUM_NIGHT_RATE = 0.05;
    
    cout << "Please enter an account number and a service code: ";
    cin >> accountNumber >> serviceCode;
    
    switch (serviceCode) {
        case 'r':
        case 'R':
            cout << "Please enter the number of minutes used: ";
            cin >> regularMinutesUsed;
            if (regularMinutesUsed > 50) {
               totalBill = ((regularMinutesUsed - 50) * REGULAR_RATE) + REGULAR_ACCOUNT_FEE;
            } else {
                totalBill = REGULAR_ACCOUNT_FEE;
            }
            break;
        case 'p':
        case 'P':
            cout << "Please enter the number of day minutes used: ";
            cin >> premiumDayMinutes;
            cout << "Please enter the number of night minutes used: ";
            cin >> premiumNightMinutes;
            if (premiumDayMinutes > 75) {
                totalBill = (premiumDayMinutes - 75) * PREMIUM_DAY_RATE;
            }
            if (premiumNightMinutes > 100) {
                totalBill = (premiumNightMinutes - 100) * PREMIUM_NIGHT_RATE;
            }
            totalBill += PREMIUM_ACCOUNT_FEE;
            break;
        default:
            cout << "You have entered an invalid service code" << endl;
            return 1;
            break;
    }
    cout << "Your bill is: $" << totalBill << endl;
    
    return 0;
}