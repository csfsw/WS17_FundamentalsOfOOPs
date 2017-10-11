#include<iostream>
using namespace std;
class Simple{
    string title;
    int numb;
public:
    Simple(): numb(0), title("none"){}
    Simple(int n, string t): numb(n), title(t){}
    Simple(Simple &s){
        cout<<"this object num : "<<numb<<" passed object numb : "<<s.numb<<endl;
        cout<<"this object title : "<<title<<" passed object title : "<<s.title<<endl;     
        numb = s.numb;
        title = s.title;
    }
    void print(){
        cout<<"This class numb has value: " << numb<<endl;
        cout<<"This class title has value: " << title<<endl;
    }
};

int main(){
    Simple s1(56,"Bubles"),s2;
    s1.print();
    s2.print();
    Simple s3(s1);
    s3.print();
}