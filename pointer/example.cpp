#include<iostream>
using namespace std;
int main(){
	int *p;
	int a=10;
	
	p=&a; //take address of variable a
	
	//check both are same address
	cout<<&a<<endl;
	cout<<p<<endl;
	
	//check both are same value
	cout<<"a= "<<a<<endl;
	cout<<"p= "<<*p;
	
	return 0;
}
