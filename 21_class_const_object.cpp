//use of const object
#include <iostream>

using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:

    Distance(int ft,float in):feet(ft),inches(in){

    }

    void getdistance() {
        cout<<"Enter the feet: ";
        cin>>feet;
        cout<<"Enter the inches: ";
        cin>>inches;
    }
    void showdistance()const{                // football onject can only use this member function because it ic const.
        cout<<"the distance in feet are: ";
        cout<<feet<<endl;
        cout<<"the distance in inches are: ";
        cout<<inches<<endl;
    }
};
int main() {

  const Distance football(300,0);    // making an object const
   
  // football.getdistance();       //we can not use this function because it is not const function

   football.showdistance();     //object football can use this easily
    return 0; 
}