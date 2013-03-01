/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 5th Edition
 Chapter 9 - Exercise 1
 markdhoad@gmail.com
 
 Write a C++ program that declares an array alpha of 50 components of type double. 
 Initialize the array so that the first 25 components are equal to the square of 
 the index variable, and the last 25 components are equal to three times the 
 index variable. Output the array so that 10 elements per line are printed.
 *****************************************************************************/


#include <iostream>
#include <iomanip>

using namespace std;

void initialise_array(double alpha[]);
void print_array(const double alpha[]);

int main()
{
    double alpha[50];
    initialise_array(alpha);
    print_array(alpha);
    return 0;
}

void initialise_array(double alpha[]) {
    for (int i = 0; i < 50; i++) {
        if (i < 25)
            alpha[i] = i * i;
        else
            alpha[i] = i * 3;
    }
}

void print_array(const double alpha[]) {
    int counter = 0;
    for (int j = 1; j <= 5; j++) {
        for (int i = 1; i <= 10; i++) {
            if (counter < 50)
                cout << setw(5) << alpha[counter];
            else
                break;
            counter++;
    }
        cout << endl;
    }
}