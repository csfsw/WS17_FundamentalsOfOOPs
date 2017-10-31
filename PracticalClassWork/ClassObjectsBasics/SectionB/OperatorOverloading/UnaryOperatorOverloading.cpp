#include<iostream>
using namespace std;

class A{
    int x;
public:
    A():x(0){}
    A(int z):x(z){}
    
    void operator ++(){
        ++x;
    }
  
    // int operator ++(int){
    // return x++;
    // }
    A operator ++(int){
        A temp;
        temp.x = x++;
        return temp;
    }
    void print(){
        cout<<endl<<"The value in x is :" <<x<<endl;
    }
};

int main(){
    A obj;
    ++obj;
    ++obj;
    A obj2 = obj++;
    obj.print();
    obj2.print();
}