//Program7: Grading System using if-else Statements
//Write a program that takes a student's score (out of 100) as input and displays the grade:

#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter the student's score (out of 100): ";
    cin >> score;
    if (score >= 90 && score <= 100) {
        cout << "Grade: A\n";
    }
    else if (score >= 80 && score < 90) {
        cout << "Grade: B\n";
    }
    else if (score >= 70 && score < 80) {
        cout << "Grade: C\n";
    }
    else if (score >= 60 && score < 70) {
        cout << "Grade: D\n";
    }
    else if (score >= 0 && score < 60) {
        cout << "Grade: F\n";
    }
    else {
        cout << "Invalid score. Please enter a score between 0 and 100.\n";
    }

    return 0;
}
