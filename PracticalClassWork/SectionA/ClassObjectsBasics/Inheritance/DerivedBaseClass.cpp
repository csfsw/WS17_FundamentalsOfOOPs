#include<iostream>
using namespace std;

class A{
public:
    int a;
};

class B: public A{
    int b;
public:
    void disp(){
        cout<<"A::a = "<<a<<"\t B::b = "<<b<<endl;
    }
};

int main(){
    B objB;
    objB.disp();
}