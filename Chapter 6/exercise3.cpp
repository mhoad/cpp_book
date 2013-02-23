/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 5th Edition
 Chapter 6 - Exercise 3
 markdhoad@gmail.com
 
 Write a program that prompts the user to input a sequence of characters 
 and outputs the number of vowels.
 *****************************************************************************/


#include <iostream>

using namespace std;

bool isVowel(char letter);

int main()
{
    char userChar;
    int vowelCount = 0;
    int charCount = 0;
    
    
    cout << "This program will check the letters you input to check for vowels." << endl;
    cout << "To terminate the program simply enter the '#' symbol " << endl;
    
    do {
        cout << "Please enter a character: ";
        cin >> userChar;
        charCount++;
        if (isVowel(userChar))
            vowelCount++;
    } while (userChar != '#');
    
    cout << "Of the " << charCount << " characters you entered " << vowelCount << " were vowels." << endl;
    
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