#include<iostream>
using namespace std;

class A{
    int varA;
public:
    void set(){
        cout<<"\n Enter value for Class A var: ";
        cin>>varA;
    }
    void set(int x){
        varA=x;
        cout<<"\n This function belongs to Class A ";
    }
};
class B{
    int varB;
public:
    void set(){
        cout<<"\n Enter value for Class B var: ";
        cin>>varB;
    }
};
class C: public A,B{
public:
    void set(){
        A::set();
        B::set();
        cout<<"\n This is C class set function \n";
    }
};
int main(){
    C obj;
    //obj.set();
    obj.A::set(10);
}