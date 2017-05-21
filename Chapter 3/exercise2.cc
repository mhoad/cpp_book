#include <iomanip>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  double height, radius;
  const double PI = 3.14159;

  cout << fixed << showpoint << setprecision(2);
  cout << "Enter the radius of the base of the cylinder: ";
  cin >> height;
  cout << endl;

  cout << "Enter the height of the cylinder: ";
  cin >> radius;
  cout << endl;

  cout << "Surface area: "
       << 2 * PI * radius * height + 2 * PI * pow(radius, 2.0) << endl;

  cout << "Volume of the cylinder = " << PI * pow(radius, 2.0)* height << endl;

  return 0;
}