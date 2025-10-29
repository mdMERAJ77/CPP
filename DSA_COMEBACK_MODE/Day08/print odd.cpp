#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter a number to print odd: ";
	cin>>num;
	
	int i=1;
	while(i<=num){
		cout<<i<<" ";
		i=i+2;
	}
	return 0;
}
