#include <iostream>
using namespace std;
int main(){
	//varialbe declare
	int a; //4bytes
	//now value assign in a
	a=10;
	cout<<"number "<<a<<endl;
	//char
	char c='a'; //1bytes
	cout<<"char "<<c<<endl;
	//float
	float f=2.31; //4bytes
	cout<<"float "<<f<<endl;
	
	//double
	double d=3.23434234234;
	cout<<"double "<<d<<endl;
	
	bool a1=0;
	bool b1=false;
	cout<<a1<<" : "<<b1<<endl;
	
	int num1,num2;
	cout<<"enter a number: ";
	cin>>num1;
	cout<<"enter second number: ";
	cin>>num2;
	cout<<"sum of num1 and num2: "<<num1+num2;
	return 0;
	
}
