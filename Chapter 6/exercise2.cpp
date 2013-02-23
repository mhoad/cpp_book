/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 5th Edition
 Chapter 6 - Exercise 2
 markdhoad@gmail.com
 
 Write a value-returning function, isVowel, that returns the value true if a 
 given character is a vowel and otherwise returns false.
 *****************************************************************************/


#include <iostream>

using namespace std;

bool isVowel(char letter);

int main()
{
    char userChar;
    
    cout << "Please enter a character: ";
    cin >> userChar;
    
    if (isVowel(userChar)) 
        cout << userChar << " is a vowel" << endl;
    else
        cout << userChar << " is not a vowel" << endl;
    
    return 0;
}

bool isVowel(char letter) {
    switch (letter) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
    }
}