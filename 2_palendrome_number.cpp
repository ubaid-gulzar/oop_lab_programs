// check a number is palendrome or not
#include<iostream>
using namespace std;

int main(){
    long long int n;
    int rem,count=0,arr[50],arr1[50];
    bool c=true;
    cout<<"Enter the number \n"<<endl;
    cin>>n;
    while(n!=0){
        rem=n%10;
        arr[count]=rem;
        count++;
        n=n/10;
    }
     for(int i=0;i<count;i++){
        arr1[count-i-1]=arr[i];
     }
    for(int i=0;i<count;i++){
      if(arr[i]==arr[count-1-i]){
         c=true;
      }else{
        c=false;
        break;
      }

    }
    if(c==true){
        cout<<"the number is palendrome\n";
    }else{
        cout<<"the number is not a palendrome\n";
    }

    return 0;
}