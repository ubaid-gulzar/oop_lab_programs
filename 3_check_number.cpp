//Program 1: Basic if Statement
//Write a program that takes an integer input from the user and checks if it is positive, 
//negative, or zero using if, else if, and else statements. Print the result accordingly.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    if(n>0){
        cout<<n<<" is a positive number\n";
    }
    else if(n<0){
        cout<<n<<" is a negative number\n";
    }
    else{
        cout<<"The number is zero\n";
    }

    return 0;
}