//ambiguity in multiple inheritance

#include<iostream>
using namespace std;

class A{
 public:
    void fun(){
        cout<<"Class A\n";
    }
};
class B{
    public:
     void fun(){
        cout<<"Class B\n";
     }
};

class C:public A, public B{

};

int main(){
    C obj;
 //   obj.fun();             //ambiguoud----> will not compare
   obj.A::fun();
   obj.B::fun();
    return 0;
}