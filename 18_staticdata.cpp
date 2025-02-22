// static local variable

#include<iostream>
using namespace std;

float getdata(float newdata){
     static float total =0;
     static int count =0;
     count++;
     total+=newdata;
     return total/count;

}

int main(){
    
    float data=1,avg;

    while(data!=0){
        cout<<"enter the number: ";
        cin>>data;
        avg=getdata(data);
        cout<<"New average is: "<<avg<<endl;

    }
    return 0;
}