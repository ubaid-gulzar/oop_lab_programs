 /*Class with Private Data Members and Getter/Setter Functions - Rectangle 
Area Calculation
• Create a Rectangle class with private attributes length and width.
• Implement setter and getter functions.
• Calculate and display the area using calculateArea().*/
#include <iostream>

using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    void setLength() {
        cout<<"enter the length of rectangle\n";
        cin>>length;
    }

    void setWidth() {
       cout<<"enter the width of rectangle\n";
        cin>>width;
    }
    double getLength() {
        return length;
    }

    double getWidth() {
        return width;
    }

    double calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect; 

    rect.setLength();
    rect.setWidth();
    cout << "Rectangle Details:" << endl;
    cout << "Length: " << rect.getLength() << endl;
    cout << "Width: " << rect.getWidth() << endl;
    cout << "Area: " << rect.calculateArea() << endl;

     return 0;
}