#include<iostream>
using namespace std;
int main(){
	cout<<"enter a number to calculate factorial: ";
	int n;
	cin>>n;
	int fact=1;
	
	for(int i=1; i<=n; i++){
		fact = fact*i;
	}
	
	cout<<fact;
	return 0;
}
