//Assignment 2: Overloading the Unary - Operator
//Create a class Vector with two integer attributes (x, y). Overload the unary - operator to negate both coordinates and print the result.

#include <iostream>

using namespace std;

class vactor {
private:
    int x;
    int y;

public:

    vactor():x(0),y(0){

    }

    void getnumber() {
        cout<<"Enter x: ";
        cin>>x;
        cout<<"Enter y: ";
        cin>>y;
    }
    void shownumber()const{               
        cout<<"\nthe x part is: ";
        cout<<x<<endl;
        cout<<"the y part is: ";
        cout<<y<<endl;
    }

    void operator --(){
        --x;
        --y;
        
    }
};
int main() {

  vactor c1,c2;

   c1.getnumber();     
   c2.getnumber();   
   --c1;
   --c2;  
   c1.shownumber();
   c2.shownumber();
    return 0; 
}