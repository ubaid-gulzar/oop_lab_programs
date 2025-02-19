/*Constructor and Destructor in a Class - Triangle Area Calculation
• Define a Triangle class with a constructor to initialize base and height.
• Implement a function calculateArea() using the formula: 
• Implement a destructor to display a message when an object is destroyed.*/

#include <iostream>

using namespace std;

class Triangle {
private:
    double base;
    double height;

public:
    Triangle(double b, double h) {
        base = b;
        height = h;
    }

    double calculateArea() {
        return 0.5 * base * height;
    }

    ~Triangle() {
        cout << "Triangle object is being destroyed." << endl;
    }
};

int main() {
    double b, h;
    cout << "Enter base of the triangle: ";
    cin >> b;
    cout << "Enter height of the triangle: ";
    cin >> h;

    Triangle tri(b, h);

    cout << "Area of the triangle: " << tri.calculateArea() << endl;

    return 0; 
}