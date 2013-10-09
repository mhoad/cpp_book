/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 6th Edition
 Chapter 2 - Exercise 15
 markdhoad@gmail.com
 
 To make a profit, a local store marks up the prices of its items by a certain percentage.
 Write a C++ program that reads the original price of the item sold, the percentage of
 the marked-up price, and the sales tax rate. The program then outputs the original
 price of the item, the percentage of the mark-up, the store’s selling price of the
 item, the sales tax rate, the sales tax, and the final price of the item.
 
 (The final price of the item is the selling price plus the sales tax.)
 
 *****************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    double originalPrice, salesTaxRate, totalPrice, markupPercentage, salesTaxPrice, markupPrice;
    
    cout << "Please enter the original price: $";
    cin >> originalPrice;
    
    cout << "Please enter the mark-up percentage: ";
    cin >> markupPercentage;
    
    cout << "Please enter the sales tax percentage: ";
    cin >> salesTaxRate;
    
    markupPrice = originalPrice * (markupPercentage / 100);
    salesTaxPrice = originalPrice * (salesTaxRate / 100);
    totalPrice = originalPrice + salesTaxPrice + markupPrice;
    
    cout << "Original Price: $" << originalPrice << endl;
    cout << "Sales Tax: $" << salesTaxPrice << endl;
    cout << "Mark-Up: $" << markupPrice << endl;
    cout << "Total Price: $" << totalPrice << endl;
    
    return 0;
}