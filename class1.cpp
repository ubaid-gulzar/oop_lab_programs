//Create a Simple Class - Circle Area Calculation
//• Define a class Circle with an attribute radius.
//• Implement a function calculateArea() to compute and return the area of the circle.
//• Create an object, set the radius, and display the area.
#include <iostream>
#define PI 3.14159

using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double calculateArea() {
        return PI * radius * radius;
    }
};

int main() {
    double r;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    Circle circle1(r);

    cout << "Area of the circle: " << circle1.calculateArea() << endl;

   return 0;
}