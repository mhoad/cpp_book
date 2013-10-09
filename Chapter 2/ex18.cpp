/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 6th Edition
 Chapter 2 - Exercise 18
 markdhoad@gmail.com
 
 A milk carton can hold 3.78 liters of milk. Each morning, a dairy farm ships 
 cartons of milk to a local grocery store. The cost of producing one liter of 
 milk is $0.38, and the profit of each carton of milk is $0.27. 
 
 Write a program that does the following:
    a. Prompts the user to enter the total amount of milk produced in the morning.
    b. Outputs the number of milk cartons needed to hold milk. (Round your answer to the nearest integer.)
    c. Outputs the cost of producing milk.
    d. Outputs the profit for producing milk.
 *****************************************************************************/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double milkProduced, cartonsRequired;
    
    const double cartonSize = 3.78;
    const double productionCost = 0.38;
    const double cartonProfit = 0.27;
    
    cout << "How much milk did you produce? ";
    cin >> milkProduced;
    
    cartonsRequired = milkProduced / cartonSize;
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << "That is going to require " << static_cast<int>(cartonsRequired) << " cartons" << endl;
    cout << "Total Cost to Produce: $" << cartonsRequired * productionCost << endl;
    cout << "Total Profit: $" << cartonsRequired * cartonProfit << endl;
    
    
    return 0;
}