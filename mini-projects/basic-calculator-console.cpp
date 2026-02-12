#include <iostream>
#include <cmath>
using namespace std;

void menu();
void input(double &x, double &y, char &oper);
void operation(double x, double y, char oper);

double addition(double x, double y);
double subtraction(double x, double y);
double multiplication(double x, double y);
double division(double x, double y);
double modulo(double x, double y);

int main() {

    double n1, n2;
    char oper;
    char r = 'y';

    while (r == 'y' || r == 'Y') {

        menu();
        input(n1, n2, oper);

        cout << "\nResult:\n";
        operation(n1, n2, oper);

        cout << "\nDo you want to perform another operation? (Y / N): ";
        cin >> r;
        cout << endl;

    }

    return 0;
}

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

void input(double &x, double &y, char &oper) {

    cout << "Enter #1: ";
    cin >> x;

    cout << "Enter operation (+ - * / %): ";
    cin >> oper;

    cout << "Enter #2: ";
    cin >> y;
}

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
            if (y == 0)
                cout << "Error: division by zero.\n";
            else
                cout << x << " / " << y << " = "
                     << division(x, y) << endl;
            break;

        case '%':
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

double addition(double x, double y) {
    return x + y;
}

double subtraction(double x, double y) {
    return x - y;
}

double multiplication(double x, double y) {
    return x * y;
}

double division(double x, double y) {
    return x / y;
}

double modulo(double x, double y) {
    return fmod(x, y);
}
