#include<iostream>
using namespace std;

int main(){
	cout<<"Execution strating..."<<endl;
	int a,b,c;
	cout<<"Enter first number "<<endl;
	cin>>a;
	cout<<"Enter second number "<<endl;
	cin>>b;
	
	try{
		if(b==0){
			throw b;
		}
		c=a/b;
		cout<<"output ="<<c<<endl;
	}
	catch(int catchE){
		cout<<"can't divide by "<<catchE<<endl;
	}
	
	cout<<"Execution Ended...";
	return 0;
}
