/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 5th Edition
 Chapter 2 - Exercise 5
 markdhoad@gmail.com
 
 Consider the following C++ program in which the statements are in the incorrect order. 
 Rearrange the statements so that it prompts the user to input the length and 
 width of a rectangle and output the area and perimeter of the rectangle.

 #include <iostream> {
  int main()
    cout << "Enter the length: ";
    cin >> length;
    cout << endl;
    int length;
    area = length * width; 
    return 0;
    int width;
    cin>> width;
    cout << "Enter the width: "
    cout << endl;
    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;
    int area;
    using namespace std; 
    int perimeter;
}

*****************************************************************************/

#include <iostream>

using namespace std;

int main()
{
  int length;
  int width;
  int perimeter;
  int area;
  
  cout << "Enter the length: ";
  cin >> length;

  cout << "Enter the width: ";
  cin>> width;

  area = length * width; 
  perimeter = (length * 2) + (width * 2);

  cout << "Area = " << area << endl;
  cout << "Perimeter = " << perimeter << endl;
  
  return 0;
}