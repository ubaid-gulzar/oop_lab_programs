//Assignment 1: Overloading the + Operator for Complex Numbers
//Write a C++ program that defines a class Complex with two integer attributes (real, imag). Overload the + operator to add two complex numbers and display the result.

#include <iostream>

using namespace std;

class Complex {
private:
    int real;
    int imaginary;

public:

    Complex():real(0),imaginary(0){

    }

    void getnumber() {
        cout<<"Enter the real part: ";
        cin>>real;
        cout<<"Enter the imaginary part: ";
        cin>>imaginary;
    }
    void shownumber()const{               
        cout<<"the real part is: ";
        cout<<real<<endl;
        cout<<"the imaginary part is: ";
        cout<<imaginary<<endl;
    }

    Complex operator +(Complex c2){
        Complex temp;
        temp.real=real+c2.real;
        temp.imaginary=imaginary+c2.imaginary;
        return temp;
    }
};
int main() {

  Complex c1,c2,c3;

   c1.getnumber();     
   c2.getnumber();   
   c3=c1+c2;  
   c1.shownumber();
   c2.shownumber();
   c3.shownumber();
    return 0; 
}