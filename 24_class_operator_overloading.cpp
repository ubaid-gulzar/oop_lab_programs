//Assignment 3: Overloading the > Operator for Comparison
//Develop a class Box with attributes (length, width, height). Overload the > operator to compare two Box objects based on volume and print whether one is larger than the other.

#include<iostream>
using namespace std;

class Box{

      int length;
      int width;
      int height;
 public:
      Box():length(0),width(0),height(0){}

      void getside(){
        cout<<"Enter the length of object: ";
        cin>>length;
        cout<<"Enter the width of object: ";
        cin>>width;
        cout<<"Enter the height of object: ";
        cin>>height;
        cout<<"The volume of the Box is: "<<length*width*height<<endl;
        cout<<endl;
      }

     bool operator >(Box b){
          if(length*width*height>b.length*b.width*b.height){
            return true;
          }
          else{
            return false;
          }

     }

};

int main(){
    Box b1,b2,b3;

    b1.getside();
    b2.getside();
    b3.getside();

   if(b1>b2){
    cout<<"the volume of box b1 is greater than box b2\n";
   }else{
    cout<<"the volume of box b2 is greater than box b1\n";
   }

   if(b1>b3){
    cout<<"the volume of box b1 is greater than box b3\n";
   }else{
    cout<<"the volume of box b3 is greater than box b1\n";
   }

   if(b2>b3){
    cout<<"the volume of box b2 is greater than box b3\n";
   }else{
    cout<<"the volume of box b3 is greater than box b2\n";
   }

    return 0;
}