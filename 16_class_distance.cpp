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

             void add_distance(Distance,Distance);       //declaration
};

void Distance::add_distance(Distance d1,Distance d2){

    inches =d1.inches + d2.inches;
    if(inches>=12.0){
        inches -= 12.0;
        feet++;
    }
    feet +=d1.feet + d2.feet;
}

int main(){
    Distance d1,d3;
    Distance d2(11,6.25);

    d1.getdistance();
    d3.add_distance(d1,d2);

    d1.showdistance();
    d2.showdistance();
    d3.showdistance();
}