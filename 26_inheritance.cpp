//create an child class of distance where we put signs(+ or -)before the number;
#include <iostream>

using namespace std;

class Distance {
protected:
    int feet;
    float inches;

public:

     Distance():feet(0),inches(0.0){
     };

    Distance(int ft,float in):feet(ft),inches(in){
             
    }

    void getdistance() {
        cout<<"Enter the feet: ";
        cin>>feet;
        cout<<"Enter the inches: ";
        cin>>inches;
    }
    void showdistance() const {                
        cout<<feet<<"'-";
        cout<<inches<<endl;
    }
};

class distsign : public Distance{

    private:
          char sign;
    public:
          distsign():Distance(){
            sign='+';                   //default sign
          }

          distsign(int ft,float in):Distance(ft,in){
                          sign='+';              // default sign
          }
          
          distsign(int ft,float in,char ch):Distance(ft,in){
            sign=ch;
          }
          void getdistance(){
            Distance::getdistance();
            cout<<"Enter the sign(+ or -): ";cin>>sign;
          }
          void showdistance() const {
            cout<<"("<<sign<<")";
            Distance::showdistance();
          }
};

int main() {

    distsign alpha;
    cout<<"Enter the data members of alpha\n";
    alpha.getdistance();
    distsign beta(25,6.25);
    distsign gama(1,4.25,'-');

    cout<<"alpha= ";alpha.showdistance();
    cout<<"beta= ";beta.showdistance();
    cout<<"gama= ";gama.showdistance();

    return 0; 
}