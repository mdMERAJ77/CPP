#include<iostream>
using namespace std;
int main(){
	cout<<"enter a number to check is prime or not: ";
	int num;
	cin>>num;
	if(num<2) 
	{
		cout<<"not prime!";
		return 0;
	}
	else{
		for(int i=2; i<=num/2; i++){
			if(num%i==0){
				cout<<"is not prime!";
				return 0;
			}	
		}
		cout<<"is prime";
		return 0;
	}
	return 0;
}
