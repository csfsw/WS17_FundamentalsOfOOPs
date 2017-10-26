#include<iostream>
using namespace std;

class A{
    int a;
};
class B: public A{
public:
    B(string msg): A(){
        cout<<"This is derived class constructor: " + msg << endl;
    }
};

int main(){
    B b("abc from user");
}