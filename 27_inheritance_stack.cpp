#include<iostream>
using namespace std;
#include<process.h>      //used for exit(1) function
class stack{
      protected:
               enum {max=3};
               int arr[max];
               int top;
        public:

              stack(){
                top=-1;
              }
              void push(int num){
                  top++;
                  arr[top]=num;
              }
              int pop(){
                int temp=arr[top];
                top--;
                return temp;
              }
              void showstack(){
                if(top==-1){
                    cout<<"Error: Stack is empty\n";
                    exit(1);
                }
                cout<<"Elements in stack are: ";
                  for(int i=0;i<=top;i++){
                     cout<<arr[i]<<" ";
                  }
                  cout<<endl;
              }
};
class stack2 : public stack{

        public:
               
               void push(int num){
                if(top==max-1){
                    cout<<"Error: Stack is full\n";
                    exit(1);
                }
                stack::push(num);
               }
               int pop(){
                if(top==-1){
                    cout<<"Error: Stack is empty\n";
                    exit(1);
                }
                return stack:: pop();
               }
};

int main(){
    int poped_element;
    stack2 s1;
    s1.push(2);
    s1.push(3);
    s1.push(4);

    s1.showstack();

   poped_element= s1.pop();
   poped_element= s1.pop();
   poped_element= s1.pop();

   cout<<"poped element was: "<<poped_element<<endl;
   
   s1.showstack();

   




}