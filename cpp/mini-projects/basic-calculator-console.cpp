#include <iostream>
#include <cmath>
using namespace std;

// Function prototypes (declarations)
void menu();
void input(double &x, double &y, char &oper);
void operation(double x, double y, char oper);

// Arithmetic operation functions
double addition(double x, double y);
double subtraction(double x, double y);
double multiplication(double x, double y);
double division(double x, double y);
double modulo(double x, double y);

int main() {

    double n1, n2;      // Variables to store the numbers
    char oper;          // Variable to store the chosen operator
    char r = 'y';       // Controls program repetition
    int a = 0;          // Counter to control menu display

    // Loop runs while user chooses 'y' or 'Y'
    while (r == 'y' || r == 'Y') {

        // Show menu only the first time
        if(a == 0)
            menu();

        // Get user input (numbers and operator)
        input(n1, n2, oper);

        cout << "\nResult:\n";

        // Perform selected operation
        operation(n1, n2, oper);

        // Ask user if they want to continue
        cout << "\nDo you want to perform another operation? (Y / N): ";
        cin >> r;
        cout << endl;

        a++; // Increment counter
    }

    return 0;
}

// Displays calculator menu
void menu() {
    cout << "==========================\n";
    cout << "==== Basic Calculator ====\n";
    cout << "==========================\n\n";

    cout << "Available operators:\n";
    cout << "+  Addition\n";
    cout << "-  Subtraction\n";
    cout << "*  Multiplication\n";
    cout << "/  Division\n";
    cout << "%  Remainder\n\n";
}

// Gets user input using references
// Reference (&) allows modifying original variables
void input(double &x, double &y, char &oper) {

    cout << "Enter #1: ";
    cin >> x;

    cout << "Enter operation (+ - * / %): ";
    cin >> oper;

    cout << "Enter #2: ";
    cin >> y;
}

// Chooses which mathematical operation to execute
void operation(double x, double y, char oper) {

    switch (oper) {

        case '+':
            cout << x << " + " << y << " = "
                 << addition(x, y) << endl;
            break;

        case '-':
            cout << x << " - " << y << " = "
                 << subtraction(x, y) << endl;
            break;

        case '*':
            cout << x << " * " << y << " = "
                 << multiplication(x, y) << endl;
            break;

        case '/':
            // Prevent division by zero
            if (y == 0)
                cout << "Error: division by zero.\n";
            else
                cout << x << " / " << y << " = "
                     << division(x, y) << endl;
            break;

        case '%':
            // Prevent modulo by zero
            if (y == 0)
                cout << "Error: modulo by zero.\n";
            else
                cout << x << " % " << y << " = "
                     << modulo(x, y) << endl;
            break;

        default:
            cout << "Invalid operator.\n";
    }
}

// Returns the sum of two numbers
double addition(double x, double y) {
    return x + y;
}

// Returns the difference between two numbers
double subtraction(double x, double y) {
    return x - y;
}

// Returns the product of two numbers
double multiplication(double x, double y) {
    return x * y;
}

// Returns the division of two numbers
double division(double x, double y) {
    return x / y;
}

// Returns the remainder using fmod (for double values)
double modulo(double x, double y) {
    return fmod(x, y);
}