//Program3: if Statement with Multiple Conditions
//Create a program that takes two integer inputs and an arithmetic operator (+, -, *, /) from the user, 
//then performs the corresponding operation. Use if, else if, and else statements to handle each case and print the result.

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

    if (ch == '+') {
        cout << "The result of " << num1 << " + " << num2 << " is: " << num1 + num2 << endl;
    }
    else if (ch == '-') {
        cout << "The result of " << num1 << " - " << num2 << " is: " << num1 - num2 << endl;
    }
    else if (ch == '*') {
        cout << "The result of " << num1 << " * " << num2 << " is: " << num1 * num2 << endl;
    }
    else if (ch == '/') {
        if (num2 == 0) {
            cout << "Error: Division by zero is not allowed." << endl;
        }
        else {
            cout << "The result of " << num1 << " / " << num2 << " is: " << (float)(num1) / num2 << endl;
        }
    }
    else {
        cout << "Invalid operator. Please enter one of (+, -, *, /)." << endl;
    }

    return 0;
}
