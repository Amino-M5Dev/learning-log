#include <iostream>
#include <cmath>
using namespace std;
int main () {

  // ============================
  // Hypotenuse Calculator
  // ============================

  cout << "--- Hypotenuse Calculator ---\n";

  int a, b;
  double c;

  cout << "Enter #1: ";
  cin >> a;
  cout << "Enter #2: ";
  cin >> b;
  c = sqrt(pow(a, 2) + pow(b, 2));

  cout << "The hyputenuse is: " << c;

  return 0;
}