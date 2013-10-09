/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 6th Edition
 Chapter 2 - Exercise 19
 markdhoad@gmail.com
 
 Redo Programming Exercise 18 so that the user can also input the cost of 
 producing one liter of milk and the profit on each carton of milk.
 
 *****************************************************************************/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double milkProduced, cartonsRequired, productionCost, cartonProfit;
    
    const double cartonSize = 3.78;
    
    cout << "How much milk did you produce? ";
    cin >> milkProduced;
    
    cout << "How much does it cost to produce? $";
    cin >> productionCost;
    
    cout << "How much profit do you make? $";
    cin >> cartonProfit;
    
    cartonsRequired = milkProduced / cartonSize;
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << "That is going to require " << static_cast<int>(cartonsRequired) << " cartons" << endl;
    cout << "Total Cost to Produce: $" << cartonsRequired * productionCost << endl;
    cout << "Total Profit: $" << cartonsRequired * cartonProfit << endl;
    
    
    return 0;
}