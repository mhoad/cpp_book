/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 5th Edition
 Chapter 5 - Exercise 5
 markdhoad@gmail.com
 
 To make telephone numbers easier to remember, some companies use letters to show their 
 telephone number. For example, using letters, the telephone number 438-5626 can be shown as 
 GET LOAN. In some cases, to make a telephone number meaningful, companies might use more 
 than seven letters. For example, 225-5466 can be displayed as CALL HOME, which uses eight 
 letters. Write a program that prompts the user to enter a telephone number expressed in 
 letters and outputs the corresponding telephone number in digits. 
 
 If the user enters more than seven letters, then process only the first seven letters. 
 Also output the – (hyphen) after the third digit. Allow the user to use both uppercase 
 and lowercase letters as well as spaces between words. 
 *****************************************************************************/


#include <iostream>

using namespace std;

int main()
{
    char letter;
    int counter = 0;
    
    cout << "Program to convert letters to their corresponding telephone digits" << endl;
    
    while (cin.get(letter) && counter < 7 ) {
        
        if (letter != ' ' && letter >= 'A' && letter <= 'z') {
            counter++; // Only increment the counter for valid characters
            if (letter > 'Z') {
                letter = (int)letter-32; // Convert lowercase to uppercase if required.
            }
            
            if (counter == 4) {
                cout << "-"; // Print the hyphen when required
            }
            
            switch (letter) {
                case 'A':
                case 'B':
                case 'C':
                    cout << "2";
                    break;
                case 'D':
                case 'E':
                case 'F':
                    cout << "3";
                    break;
                case 'G':
                case 'H':
                case 'I':
                    cout << "4";
                    break;
                case 'J':
                case 'K':
                case 'L':
                    cout << "5";
                    break;
                case 'M':
                case 'N':
                case 'O':
                    cout << "6";
                    break;
                case 'P':
                case 'Q':
                case 'R':
                case 'S':
                    cout << "7";
                    break;
                case 'T':
                case 'U':
                case 'V':
                    cout << "8";
                    break;
                case 'W':
                case 'X':
                case 'Y':
                case 'Z':
                    cout << "9";
                    break;
                default:
                    break;
            }
        }
        
    }
    return 0;
    }