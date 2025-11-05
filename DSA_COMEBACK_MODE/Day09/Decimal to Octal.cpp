#include<iostream>
using namespace std;
int main(){
	//Decimal to Binary
	int num,rem;
	cout<<"enter a number: ";
	cin>>num;
	int ans=0,mul=1;
	while(num>0){
		rem=num%2;
		num=num/2;
		ans=rem*mul+ans;
		mul=mul*10;
	}
	cout<<ans<<endl;
	
	//Binary to Octal
	int num1,rem1;
	num1=ans;
	int ans1=0,mul1=1;
	while(num1>0){
		rem1=num1%8;
		num1=num1/8;
		ans1=rem1*mul1+ans1;
		mul1=mul1*10;
	}
	cout<<ans1;
	
	return 0;
}
