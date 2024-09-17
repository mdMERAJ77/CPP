#include<iostream>
using namespace std;

int main(){						//formula binomial coefficeint =n!/(r!*(n-r)!)
	int fact=1,n;
	cout<<"enter n "<<endl;
	cin>>n;
	for(int i=1; i<=n; i++){
		fact*=i;
	}
	//cout<<fact<<endl;
	
	int fact1=1,r;
	cout<<"enter r "<<endl;
	cin>>r;
	for(int i=1; i<=r; i++){
		fact1*=i;
	}
	//cout<<fact1<<endl;
	
	int store =(n-r);
	int fact2=1;
	//cout<<store<<endl;
	for(int i=1; i<=store; i++){
		fact2*=i;
	}
	//cout<<fact2<<endl;
	
	int binomial =fact/(fact1*fact2);
	cout<<"binomial is "<<binomial;
	return 0;
}
