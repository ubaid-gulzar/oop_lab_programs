/*create two user defined datatype of distance in feet and inches and add them to store them in third one and use const keywaor*/
#include <iostream>

using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    Distance():feet(0),inches(0) {
        
    }

    Distance(int ft,float in):feet(ft),inches(in){

    }

    void getdistance() {
        cout<<"Enter the feet: ";
        cin>>feet;
        cout<<"Enter the inches: ";
        cin>>inches;
    }
    void showdistance()const{                // we use const here because it doesn't (or certainly shouldn't) modify any of the data in the object for which it was called
        cout<<"the distance in feet are: ";
        cout<<feet<<endl;
        cout<<"the distance in inches are: ";
        cout<<inches<<endl;
    }
    Distance add_dist( const Distance&) const;
};

Distance Distance:: add_dist( const Distance& d2)const{
    Distance temp;
   // d2.feet=0;               it will show error because we can not modify the data member feet of object d2.
   //feet=0;                   it will also show error because we can not modify the data member feet of object d1.
    temp.feet = feet + d2.feet;
    temp.inches=inches + d2.inches;
    if(temp.inches >=12 ){
        temp.feet += 1;
        temp.inches -=12.0;
    }
        return temp;
    
}

int main() {

   Distance d1;
   Distance d2(5,8.5);
   d1.getdistance();
   Distance d3 =d1.add_dist(d2);
   d3.showdistance();
    return 0; 
}