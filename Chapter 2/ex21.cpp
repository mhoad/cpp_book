/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 6th Edition
 Chapter 2 - Exercise 21
 markdhoad@gmail.com
 
 A permutation of three objects, a, b, and c, is any arrangement of these objects in a row. 
 For example, some of the permutations of these objects are abc, bca, and cab. 
 The number of permutations of three objects is six. Suppose that these three objects are strings. 
 Write a program that prompts the user to enter three strings. 
 The program then outputs the six permutations of those strings.
 
 *****************************************************************************/


#include <iostream>

using namespace std;

int main(){
    char letterOne, letterTwo, letterThree;
    
    cout << "Please enter 3 letters seperated by a space: ";
    cin >> letterOne >> letterTwo >> letterThree;
    
    cout << "Here are all the possible permutations of those letters: " << endl;
    cout << letterOne << letterTwo << letterThree << endl;
    cout << letterTwo << letterThree << letterOne << endl;
    cout << letterThree << letterOne << letterTwo << endl;
    cout << letterOne << letterThree << letterTwo << endl;
    cout << letterTwo << letterOne << letterThree << endl;
    cout << letterThree << letterTwo << letterOne << endl;
    return 0;
}