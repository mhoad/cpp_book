/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 5th Edition
 Chapter 10 - Exercise 1
 markdhoad@gmail.com
 
 Write a program to test the function seqOrderedSearch. Use either the 
 function bubbleSort or selectionSort to sort the list before the search.
 *****************************************************************************/


#include <iostream>

using namespace std;

void bubbleSort(int list[ ] , int length);
int seqOrderedSearch(const int list[], int listLength, int searchItem);

int main()
{
    int list[] = {2, 56, 34, 25, 73, 46, 89, 10, 5, 16};
    bubbleSort(list, 10);
    int pos = seqOrderedSearch(list, 10, 46);
    cout << "The element 46 was found at position: " << pos << endl;
    
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

int seqOrderedSearch(const int list[], int listLength, int searchItem) {
    int loc;
    bool found = false;
    for (loc = 0; loc < listLength; loc++) if (list[loc] >= searchItem){
        found = true;
        break;
    }
    if (found)
        if (list[loc] == searchItem)
            return loc;
        else
            return -1; 
}
 