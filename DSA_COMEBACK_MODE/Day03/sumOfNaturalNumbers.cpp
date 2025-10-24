#include<iostream>
using namespace std;
int main(){
	cout<<"enter a number: ";
	int num;
	cin>>num;
	int sum=0;
	for(int i=1;i<=num;i++){
		sum=sum+i;
	};
	cout<<sum;
	
//  optimize way to calculate sum of natural numbers
//	int num1;
//	cin>>num1;
//	cout<<(num1*(num1+1))/2;

	return 0;
}
