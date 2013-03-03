/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 5th Edition
 Chapter 9 - Exercise 5
 markdhoad@gmail.com
 
 Write a program that prompts the user to input a string and outputs the string 
 in uppercase letters. (Use a character array to store the string.)
 *****************************************************************************/


#include <iostream>

using namespace std;

int main()
{
    char userInput[50];
    
    cout << "Enter a word in lowercase letters: ";
    cin >> userInput;    
    for (int i = 0; i <= strlen(userInput); i++) {
        userInput[i] = toupper(userInput[i]);
    }
    cout << userInput;
    return 0;
}
