/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 5th Edition
 Chapter 7 - Exercise 8
 markdhoad@gmail.com
 
 Write a progam that reads a string and outputs the number of times each lowercase 
 vowel appears in it. Your program must contain a function with one of its parameters 
 as a string variable, and return the number of times each lowercase vowel appears in it. 
 Also write a program to test your function. (Note that if str is a variable of type 
 string, then str.at(i) returns the character at the ith position. The position of 
 the first character is 0. Also, str.length() returns the length of the str, that is, 
 the number of characters in str.)
 *****************************************************************************/


#include <iostream>
#include <string>

using namespace std;

void countVowels(string userString);

int main()
{
    string userString;
    cout << "Please enter a string: ";
    getline(cin,userString,'\n');
    countVowels(userString);
    
    return 0;
}

void countVowels(string userString){
    char currentChar;
    int a = 0, e = 0, i = 0, o = 0, u = 0; //variables to hold the number of instances of each vowel
    
    for (int x = 0; x < userString.length(); x++) {
        currentChar = userString.at(x);
        switch (currentChar) {
            case 'a':
                a += 1;
                break;
            case 'e':
                e += 1;
                break;
            case 'i':
                i += 1;
                break;
            case 'o':
                o += 1;
                break;
            case 'u':
                u += 1;
                break;
            default:
                break;
        }
    }
    cout << "Out of the " << userString.length() << " characters you entered." << endl;
    cout << a << " were the letter a" << endl;
    cout << e << " were the letter e" << endl;
    cout << i << " were the letter i" << endl;
    cout << o << " were the letter o" << endl;
    cout << u << " were the letter u" << endl;
}



