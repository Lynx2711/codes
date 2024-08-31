#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;

    // Perform arithmetic operations
    int addition = num1 + num2;
    int subtraction = num1 - num2;
    int multiplication = num1 * num2;
    double division;
    if (num2 != 0) {
        division = static_cast<double>(num1) / num2;
        int modulus = num1 % num2;

        cout << "Addition: " << addition << endl;
        cout << "Subtraction: " << subtraction << endl;
        cout << "Multiplication: " << multiplication << endl;
        cout << "Division: " << division << endl;
        cout << "Modulus: " << modulus << endl;
    } else {
        cout << "Addition: " << addition << endl;
        cout << "Subtraction: " << subtraction << endl;
        cout << "Multiplication: " << multiplication << endl;
        cout << "Division: Undefined (cannot divide by zero)" << endl;
        cout << "Modulus: Undefined (cannot divide by zero)" << endl;
    }

    return 0;
}
