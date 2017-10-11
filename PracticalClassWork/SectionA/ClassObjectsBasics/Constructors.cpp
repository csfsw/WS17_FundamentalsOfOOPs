#include<iostream>
using namespace std;

class A{
public:
    A(){
        cout<<"Object is being created"<<endl;
    }
    ~A(){
        cout<<"Object is being destroyed"<<endl;
    }
};

int main(){
    A obj1,obj2,obj3;
    for(int x=0;x < 5; x++){
        cout<< "Loop is runing"<<endl;
    }
}
