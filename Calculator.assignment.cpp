#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2;
    char continueCalc = 'Y';

    while (continueCalc == 'Y' || continueCalc == 'y') {
        // Ask user for input
        cout << "Enter an arithmetic expression (e.g., 3 + 2): " << endl;

        // Read the first number, operator, and second number with spaces between them
        cin >> num1 >> operation >> num2;

        // Perform calculation based on the operator entered
        switch (operation) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            }
            else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator. Please use +, -, *, or /." << endl;
            break;
        }

        // Ask the user if they want to continue
        cout << "Do you want to perform another calculation? (Y/N): ";
        cin >> continueCalc;
    }

    // Program termination message
    cout << "Program Finished." << endl;

    return 0;
}
