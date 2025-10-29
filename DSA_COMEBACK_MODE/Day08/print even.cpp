#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter a number to print even: ";
	cin>>num;
	int i=0;
	while(i<=num){
		cout<<i<<" ";
		i=i+2;
	}
	return 0;
}
