//Program4: switch Statement for Days of the Week
//Write a program that takes a number between 1 and 7 from the user and uses a switch statement to print the corresponding day of the week (1 for Monday, 2 for Tuesday, etc.).
// Print "Invalid input" if the number is not between 1 and 7.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number between 1 and 7: ";
    cin >> n;

    switch (n) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid input. Please enter a number between 1 and 7." << endl;
            break;
    }

    return 0;
}
