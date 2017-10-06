#include<iostream>
using namespace std;
class Simp {
    int numb;
public:
    void put(){
        cout<<"Enten an integer \n";
        cin>>numb;
    }
    int get(){
        return numb;
    }
};

int main(){
    Simp obj;
    obj.put();
    cout<<endl<<obj.get();
}