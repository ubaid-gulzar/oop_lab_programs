//Program5: switch Statement for Basic Calculator
//Write a program that takes two integers and a character representing an operation (+, -, *, /)
// as input from the user and uses a switch statement to perform the appropriate arithmetic operation and print the result.
#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    char ch;
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;
    cout << "Enter the arithmetic operator (+, -, *, /): ";
    cin >> ch;
    switch (ch) {
        case '+':
            cout << "The result of " << num1 << " + " << num2 << " is: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "The result of " << num1 << " - " << num2 << " is: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "The result of " << num1 << " * " << num2 << " is: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
            } else {
                cout << "The result of " << num1 << " / " << num2 << " is: " << (float)(num1) / num2 << endl;
            }
            break;
        default:
            cout << "Invalid operator. Please enter one of (+, -, *, /)." << endl;
            break;
    }

    return 0;
}
