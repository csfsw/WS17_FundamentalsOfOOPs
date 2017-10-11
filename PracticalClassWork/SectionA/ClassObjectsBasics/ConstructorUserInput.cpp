#include<iostream>
using namespace std;

class Input{
    int srNo;
    string title;
public:
    Input();
};

Input::Input(){
    cout<<"Enter serial no: ";
    cin>>srNo;
    cout<<endl<<"Enter title: ";
    cin>>title;
}

int main(){
    Input in1,in2;
}