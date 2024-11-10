#include<iostream>
using namespace std;
int main()
{
    int i;
    int a[5];
    cout<<"enter the marks in 5 subjects "<<endl;
    int total=0;
for ( i = 0; i <5; i++)
{
    cin>>a[i];
    total =total+a[i];
}
float average=(float)total/5;
cout<<"The total marks obtained by the student are: "<<total<<endl;
cout<<"And the percentage are: "<<average<<endl;
return 0;
}