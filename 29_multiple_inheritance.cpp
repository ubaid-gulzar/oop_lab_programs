#include<iostream>
using namespace std;
const int len = 80;

class employee{
      private:
        char name[len];
        unsigned long int number;
      public:
        void getdata(){
            cout<<"Enter the last name: "; cin>>name;
            cout<<"Enter the number: "; cin>>number;
        }
        void putdata(){
            cout<<"Name: "<<name<<endl;
            cout<<"Number: "<<number<<endl;

        }
    
};

class student{ 
    string school;                   //name of the school or university
    string degree;                   //heighest degree earned;
  public:
    void getdata(){
        cout<<"Enter the name of school: ";cin>>school;
        cout<<"Enter heighest degree earned: ";cin>>degree;
    }
    void putdata(){
       cout<<"The school or university "<<school<<endl;
       cout<<"The heighest degree earned is "<<degree<<endl;

    }

};

class manager: private employee, private student{
      private:
        char title[len];
        double dues;
      public:
      void getdata(){
        employee::getdata();
        cout<<"Enter title: "; cin>>title;
        cout<<"Enter golf club dues: "; cin>>dues;
        student::getdata();
    }
    void putdata(){
        employee::putdata();
        cout<<"Title: "<<title<<endl;
        cout<<"Gulf club dues : "<<dues<<endl;
        student::putdata();
    }
};
class scientist:private employee,private student{
      private:
        int pubs;
      public:
         void getdata(){
        employee::getdata();
        cout<<"Enter number of publications: "; cin>>pubs;
        student::getdata();
       }
        void putdata(){
        employee::putdata();
        cout<<"Number of publications are: "<<pubs<<endl;
        student::putdata();
        
       }

};
class loborer:public employee{

};
class foreman:private loborer{
    private:
       float quotas;
    public:
       void getdata(){
        loborer::getdata();
        cout<<"Enter quotas: "; cin>>quotas;
      }
       void putdata(){
        loborer::putdata();
        cout<<"Quotas: "<<quotas<<endl;
        
    }
};

int main(){
    foreman f1;
    manager m1;
    scientist s1;
    cout<<"Enter the data for scientist 1\n";
    s1.getdata();
    cout<<endl;
    cout<<"Enter the data for foreman 1\n";
    f1.getdata();
    cout<<endl;
    cout<<"Enter the data for manager 1\n";
    m1.getdata();
    cout<<endl;

    cout<<"The data for scientist 1 is\n";
    s1.putdata();
    cout<<endl;
    cout<<"The data for foreman 1 is\n";
    f1.putdata();
    cout<<endl;
    cout<<"The data for manager 1 is\n";
    m1.putdata();
    cout<<endl;
    

     
    return 0;
}