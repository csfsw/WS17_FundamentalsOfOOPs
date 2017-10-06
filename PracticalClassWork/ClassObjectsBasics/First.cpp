#include<iostream>
 using namespace std;

 class First{
    int numb;
 public:
    void set(){
        cout<<"Enter an integer "<<endl;
        cin>> numb;
    }
    int get(){
        return numb;
    }
 };

 int main(){
     First obj1;
     obj1.set();
     cout <<"The value in this object instance is:" << obj1.get()<<endl;
 }