/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 5th Edition
 Chapter 6 - Exercise 1
 markdhoad@gmail.com
 
 Write a program that uses the function isNumPalindrome given in Example 6-5 (Palindrome Number). 
 Test your program on the following numbers: 10, 34, 22, 333, 678, 67876, 44444, and 123454321.
 *****************************************************************************/


#include <iostream>
#include <cmath>

using namespace std;

bool isNumPalindrome(int num);

int main()
{
    cout << "The following lines indicate if a number is a palindrome or not where 0 = false and 1 = true" << endl;
    cout << "Is 10 a palindrome? : " << isNumPalindrome(10) << endl;
    cout << "Is 34 a palindrome? : " << isNumPalindrome(34) << endl;
    cout << "Is 22 a palindrome? : " << isNumPalindrome(22) << endl;
    cout << "Is 333 a palindrome? : " << isNumPalindrome(333) << endl;
    cout << "Is 678 a palindrome? : " << isNumPalindrome(678) << endl;
    cout << "Is 67876 a palindrome? : " << isNumPalindrome(67876) << endl;
    cout << "Is 44444 a palindrome? : " << isNumPalindrome(44444) << endl;
    cout << "Is 123454321 a palindrome? : " << isNumPalindrome(123454321) << endl;
    
    
    return 0;
}

bool isNumPalindrome(int num) {
    int pwr = 0;
    if (num < 10) return true;
    else {
        while (num / static_cast<int>(pow(10.0, pwr)) >= 10) pwr++;
        while (num >= 10)
        {
            int tenTopwr = static_cast<int>(pow(10.0, pwr));
            if ((num / tenTopwr) != (num % 10))
                return false;
            else {
                num = num % tenTopwr;
                num = num / 10;
                pwr = pwr - 2;
            }
        }
        return true;
    }
}