// initialize objects using default copy constructor

#include<iostream>
using namespace std;

class Distance{
      private:
              int feet;
              float inches;
     public:
              Distance():feet(0),inches(0.0){}
              Distance(int ft,float in):feet(ft),inches(in){}

              void getdistance(){
                cout<<"enter feet: ";
                cin>>feet;
                
                cout<<"enter inches: ";
                cin>>inches;

              }

              void showdistance(){
                cout<<"feet: "<<feet<<"\ninches: "<<inches<<endl;
              }

};

int main(){
    Distance d1(11,6.25);
    Distance d2(d1);                                  //default copy constructor
    Distance d3=d1;                                   //default copy constructor

    d1.showdistance();
    d2.showdistance();
    d3.showdistance();
}