/*create two user defined datatype of distance in feet and inches and add them to store them in third one*/
#include <iostream>

using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    Distance():feet(0),inches(0) {
        
    }

    void getdistance() {
        cout<<"Enter the feet: ";
        cin>>feet;
        cout<<"Enter the inches: ";
        cin>>inches;
    }
    void showdistance(){
        cout<<"the distance in feet are: ";
        cout<<feet<<endl;
        cout<<"the distance in inches are: ";
        cout<<inches<<endl;
    }
    Distance add(Distance d2){
        Distance temp;
        temp.feet = feet + d2.feet;
        temp.inches=inches + d2.inches;
        if(temp.inches >=12 ){
            temp.feet += temp.inches/12;
            temp.inches %= 12;
        }
            return temp;
        
    }
};

int main() {

   Distance d1,d2,d3 ;
   d1.getdistance();
   d2.getdistance();
   d3 =d1.add(d2);
   d3.showdistance();
    return 0; 
}