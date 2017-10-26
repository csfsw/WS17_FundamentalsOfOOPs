#include<iostream>
using namespace std;

class Base{
public:
private:
    int a;
public:
    int getA()const{
        return a;
    }
};
class Derived: public Base{
public: 
    int b;
    void display(){
        cout<<"A(a): "<< getA() << "\t B(b):"<<b<<endl;
    }
};

int main(){
    Derived d;
    d.display();
}