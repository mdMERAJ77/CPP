#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a number to print odd: ";
	cin>>n;
	
	int i=1;
	while(i<=n){
		cout<<i<<" ";
		i=i+2;
	}
	return 0;
}
