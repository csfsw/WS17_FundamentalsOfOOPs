#include<iostream>
using namespace std;

class A{
private:
    int prv;
protected:
    int prt;
public:
    int pub;
void disp(){
cout<<"This is from base class -> A::prv : "<< prv<<"\t A::prt : "<<prt<< "\t A:: pub"<<pub<<endl;
}
};

class B: public A{
public:
void disp(){
    cout<<"A::prv : restricted"<<"\t A::prt : "<<prt<< "\t A:: pub"<<pub<<endl;    
}
};
class C: protected A{
public:
void disp(){
    A::disp();
    cout<<"A::prv : restricted"<<"\t A::prt : "<<prt<< "\t A:: pub"<<pub<<endl;    
}
};
int main(){
    B objB; C objC;
    objB.disp();
    cout<<"A::prv : restricted for objB"<<"\t A::prt : restricted for objB"<< "\t A:: pub"<<objB.pub<<endl;        
    objC.disp();
    cout<<"A::prv : restricted for objC"<<"\t A::prt : restricted for objC"<< "\t A:: restricted for objC"<<endl;        
    
}