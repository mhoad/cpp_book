/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 5th Edition
 Chapter 5 - Exercise 3
 markdhoad@gmail.com
 
 Rewrite the program of Example 5-5, Telephone Digits. Replace the statements from 
 Line 10 to Line 28 so that the program uses only a switch structure to find the 
 digit that corresponds to an uppercase letter.
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
    
    while (letter != '#' && letter >= 'A' && letter <= 'Z') {
        cout << "The letter you entered is: " << letter << endl;
        cout << "The corresponding telephone digit is: ";
        
        
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