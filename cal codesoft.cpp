#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2;

    // Display options to the user
    cout << "Simple Calculator" << endl;
    cout << "Select operation (+, -, *, /): ";
    cin >> operation;

    // Get user input
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Perform calculation based on user input
    switch(operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operation selected." << endl;
            break;
    }

    return 0;
}
