/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 6th Edition
 Chapter 2 - Exercise 16
 markdhoad@gmail.com
 
 If you buy a 40GB hard drive, then chances are that the actual storage on the hard drive 
 is not 40GB. This is due to the fact that, typically, a manufacturer uses 1000 bytes 
 as the value of 1K bytes, 1000K bytes as the value of 1MB, 1000MB as the value of 1GB. 
 Therefore, a 40GB byte hard drive contains 40,000,000,000 bytes. However, in computer 
 memory, as given in Table 1-1 (Chapter 1), 1KB is equal to 1024 bytes, and so on. 
 So the actual storage on a 40GB hard drive is approximately 37.25GB. 
 (You might like to read the fine print next time you buy a hard drive.)
 
 Write a program that prompts the user to enter the size of the hard drive specified 
 by the manufacturer, on the hard drive box, and outputs the actual 
 storage capacity of the hard drive.
 *****************************************************************************/


#include <iostream>

using namespace std;

int main(){
    double hddSpecifiedSize, hddRealSize;
    
    cout << "Please enter the size of the HDD: ";
    cin >> hddSpecifiedSize;
    
    hddSpecifiedSize = hddSpecifiedSize * 1000 * 1000;  //Give the size in bytes
    hddRealSize = hddSpecifiedSize / 1024 / 1024;       //Recompile to GB
    
    cout << "Hard Drive is actually: " << hddRealSize << "GB" << endl;
    
    return 0;
}