#include<iostream>
using namespace std;
int main(){
	cout<<"enter a number: ";
	int n;
	cin>>n;
	cout<<"enter a power: ";
	int pow;
	cin>>pow;
	int store=1;
	for(int i=1;i<=pow;i++){
		 store = n*store;	
	};
	cout<<store;
	return 0;
}
