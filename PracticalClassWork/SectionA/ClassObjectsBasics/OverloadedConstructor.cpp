#include<iostream>
using namespace std;

class A{
public:
    A(){
        cout<<"Object is created with no-argument constructor"<<endl;
    }
    A(string clName){
        cout<<"This contructor is called for: "<<clName<<endl;
    }
};

int main(){
    A obj1, obj2("Object 2");
}