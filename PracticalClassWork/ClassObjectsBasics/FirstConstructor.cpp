#include<iostream>
using namespace std;

class First{
	int numb;
public:
	First():numb(0){
		cout<<"\n Constructor is being called; the value is set to: "<<numb<<endl;
	}
	First(int n):numb(n){
		cout<<"\n Constructor is being called; the value is set to: "<<numb<<endl;
	}
	//First(){
	//	numb=0;
	//}
	void set(){
		cout<<"\n Enter an interger \t :";
		cin>> numb;
	}
	int get(){
		return numb;
	}
};

int main(){
	First f1;
	cout<<"\n Current value in First -> numb: "<<f1.get()<<endl;
	f1.set();
	cout<<"\n Current value in First -> numb: "<<f1.get()<<endl;
	First f2(6);

}