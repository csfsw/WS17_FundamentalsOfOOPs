#include<iostream>
using namespace std;

class Student{
    int id;
    string name;
public:
    Student(): id(0), name("none"){
        cout<<"Constructor with no arguments\n";
        cout<<" id: "<<id<<" \t\t name: "<<name <<endl;
    }
    Student(int i, string n): id(i), name(n){
        cout<<"Constructor with two arguments\n";
        cout<<" id: "<<i<<" \t\t name: "<<n<<endl;
    }
};

int main(){
    Student obj1, obj2(3,"Zubeer"),obj3;
}