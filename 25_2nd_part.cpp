#include<iostream>
using namespace std;

class Counter{
      protected:
             unsigned int count;     
     public:                      
              Counter():count(0){
                
              }
              Counter(int c):count(c){

              }
              unsigned int get_count() const{
                return count;
              }
              
              Counter operator ++() {
                return Counter(++count);
              }
};
class countdn : public Counter{
      public:
           countdn() : Counter(){

           }
           countdn(int k) : Counter(k){

           }
            countdn operator --(){
               return countdn(--count);
            }
};     
int main(){
    countdn c1(2);

    cout<<"c1 =  "<<c1.get_count()<<endl;
    ++c1;
    ++c1;
    ++c1;
    cout<<"c1 =  "<<c1.get_count()<<endl;
    --c1;
    --c1;
    cout<<"c1 =  "<<c1.get_count()<<endl;
    
    return 0;
}