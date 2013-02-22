/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 5th Edition
 Chapter 5 - Exercise 4
 markdhoad@gmail.com
 
 The program Telephone Digits outputs only telephone digits that correspond to 
 uppercase letters. Rewrite the program so that it processes both uppercase and 
 lowercase letters and outputs the corresponding telephone digit. 
 If the input is something other than an uppercase or lowercase letter, 
 the program must output an appropriate error message.
 *****************************************************************************/


#include <iostream>

using namespace std;

int main()
{
    char letter;
    
    cout << "Program to convert letters to their corresponding telephone digits" << endl;
    cout << "To stop the program press #" << endl;
    
    cout << "Enter a letter: " ;
    cin >> letter;
    
    
    while (letter != '#' && letter >= 'A' && letter <= 'z') {
        cout << "The letter you entered is: " << letter << endl;
        cout << "The corresponding telephone digit is: ";
        
        if (letter > 'Z') {
            letter = (int)letter-32; // Convert lowercase to uppercase if required.
        }
        
        switch (letter) {
            case 'A':
            case 'B':
            case 'C':
                cout << "2" << endl;
                break;
            case 'D':
            case 'E':
            case 'F':
                cout << "3" << endl;
                break;
            case 'G':
            case 'H':
            case 'I':
                cout << "4" << endl;
                break;
            case 'J':
            case 'K':
            case 'L':
                cout << "5" << endl;
                break;
            case 'M':
            case 'N':
            case 'O':
                cout << "6" << endl;
                break;
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                cout << "7" << endl;
                break;
            case 'T':
            case 'U':
            case 'V':
                cout << "8" << endl;
                break;
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                cout << "9" << endl;
                break;
            default:
                break;
        }
        
        cout << "Enter another letter to find out the number: ";
        cin >> letter;
    }
           return 0;
           }