/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 5th Edition
 Chapter 9 - Exercise 3
 markdhoad@gmail.com
 
 Write a C++ function, lastLargestIndex, that takes as parameters an int array 
 and its size and returns the index of the last occurrence of the largest 
 element in the array. Also, write a program to test your function.
 *****************************************************************************/


#include <iostream>

using namespace std;

int lastLargestIndex(int numberArray[], int arraySize);

int main()
{
    const int MAX_ARRAY_SIZE = 10;
    int testArray[MAX_ARRAY_SIZE] {10, 18, 43, 1, 2, 18, 1, 91, 2, 91};
    int largestIndexPos = lastLargestIndex(testArray, MAX_ARRAY_SIZE);
    cout << "The largest index was position: " << largestIndexPos;
    cout << " with a value of: " << testArray[largestIndexPos];
    return 0;
}

int lastLargestIndex(int numberArray[], int arraySize) {
    int largestIndex = 0;
    
    for (int i = 0; i < arraySize; i++) {
        if (numberArray[i] >= largestIndex)
            largestIndex = i;
    }
    return largestIndex;
}