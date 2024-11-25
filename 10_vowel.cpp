//Program10: switch Statement for Character Analysis
//Write a program that takes a single character as input from the user and uses a switch statement to 
//check if the character is a vowel (a, e, i, o, u for both uppercase and lowercase) or a consonant. Print the result accordingly.
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a single character: ";
    cin>>ch;
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << "The character '" << ch << "' is a vowel." << endl;
            break;
        default:
            if ((ch >= 'a' && ch <= 'z')||(ch>='A'&& ch<='Z')) {
                cout << "The character '" << ch << "' is a consonant." << endl;
            } else {
                cout << "Invalid input. Please enter a valid alphabet character." << endl;
            }
            break;
    }

    return 0;
}
