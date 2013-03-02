/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 5th Edition
 Chapter 9 - Exercise 2
 markdhoad@gmail.com
 
 Write a C++ function, smallestIndex, that takes as parameters an int array and 
 its size and returns the index of the first occurrence of the smallest element 
 in the array. Also, write a program to test your function.
 *****************************************************************************/


#include <iostream>

using namespace std;

int smallestIndex(int numberArray[], int arraySize);

int main()
{
    const int MAX_ARRAY_SIZE = 10;
    int testArray[MAX_ARRAY_SIZE] {0, 18, 43, 6, 2, 18, 12, 22, 2, 1};
    int smallestPosition = smallestIndex(testArray, MAX_ARRAY_SIZE);
    cout << "The smallest index was position: " << smallestPosition;
    cout << " with a value of: " << testArray[smallestPosition];
    return 0;
}

int smallestIndex(int numberArray[], int arraySize) {
    int smallest = 0;
    for (int i = 0; i < arraySize-1; i++) {
        if (numberArray[i] > numberArray[i+1])
            smallest = i+1;
    }
    return smallest;
}