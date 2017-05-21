#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main() {
  ifstream inFile;
  ofstream outFile;
  double width, length, parameter, radius, circumference;
  double balance, interestRate;
  char ch;
  int age;
  string firstName, lastName;
  const double PI = 3.1416; 

  inFile.open("inData.txt");
  outFile.open("outData.txt");

  inFile >> length >> width >> radius >> firstName 
         >> lastName >> age >> balance >> interestRate >> ch;
  
  cout << fixed << showpoint << setprecision(2);;

  cout << "Rectange:" << endl;
  cout << "Length = " << length << ", Width: " << width
       << ", Area = " << length * width 
       << ", Parameter = " << (length + width) * 2 << endl;
  cout << endl;
  
  cout << "Circle: " << endl;
  cout << "Radius: " << radius << ", Area: " << PI * pow(radius, 2) 
       << ", Circumference: " << 2 * PI * radius << endl;
  cout << endl;

  cout << "Name: " << firstName << " " << lastName << ", Age: " << age << endl;
  cout << "Beginning Balance = $" << balance << ", Interest Rate: " << interestRate << endl;
  cout << "Balance at end of the month: $" 
       << balance * (interestRate / 100 / 12) + balance << endl;
  cout << endl;

  cout << "The ASCII character that comes after " << ch << " is " << ++ch << endl;
  inFile.close();
  outFile.close();

  return 0;
}