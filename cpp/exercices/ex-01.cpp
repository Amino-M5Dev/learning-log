#include <iostream>
using namespace std;

int main() {

  // ============================
  // Circumference Calculator
  // ============================

  cout << "--- Circumference Calculator ---\n";

  const double pi = 3.14159;
  double radius;
  double circumference = 2 * pi * radius;

  cout << "Enter the radius: ";
  cin >> radius;
  cout << "The circumference is: " << circumference << "cm";

  return 0;
}