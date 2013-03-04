/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 5th Edition
 Chapter 10 - Exercise 2
 markdhoad@gmail.com
 
 Write a program to test the function binarySearch. 
 Use either the function bubbleSort or selectionSort to sort the list before the search.
 *****************************************************************************/


#include <iostream>

using namespace std;

void bubbleSort(int list[ ] , int length);
int binarySearch(const int list[], int listLength, int searchItem);
int main()
{
    int list[] = {2, 56, 34, 25, 73, 46, 89, 10, 5, 16};
    bubbleSort(list, 10);
    int pos = binarySearch(list, 10, 89);
    cout << "The element 89 was found at position: " << pos << endl;
    
    return 0;
}

void bubbleSort(int list[], int length) {
    int temp;
    int iteration;
    int index;
    for (iteration = 1; iteration < length; iteration++) {
        for (index = 0; index < length - iteration; index++) if (list[index] > list[index + 1])
        {
            temp = list[index]; list[index] = list[index + 1]; list[index + 1] = temp;
        }
    }
}

int binarySearch(const int list[], int listLength, int searchItem) {
    int first = 0;
    int last = listLength - 1;
    int mid;
    bool found = false;
    
    while (first <= last && !found)
    {
        mid = (first + last) / 2;
        
        if (list[mid] == searchItem)
            found = true;
        else if (list[mid] > searchItem)
            last = (mid - 1);
        else
            first = (mid + 1);
    }
    if (found)
        return mid;
    else
        return -1;
}//end binarySearch