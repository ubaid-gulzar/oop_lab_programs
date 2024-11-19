// Program2: Nested if Statements
// Write a program that takes a user’s age as input and uses nested if statements to determine and 
// print whether the person is a child (age < 12), teenager (age between 12 and 18), adult (age between 18 and 60), or senior (age > 60).
#include<iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter the age of person age: ";
    cin >> age;
    if (age >= 0) {
        if (age < 12) {
            cout << "The person is a child." << endl;
        } else {
            if (age <= 18) {
                cout << "The person is teenager." << endl;
            } else {
                if (age <= 60) {
                    cout << "The person is an adult." << endl;
                } else {
                    cout << "The person is a senior." << endl;
                }
            }
        }
    } 
  return 0;
}