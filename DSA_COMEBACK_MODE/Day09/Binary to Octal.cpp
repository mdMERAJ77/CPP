//Binary to Octal: first Binary to Decimal then Decimal to Octal

#include<iostream>
using namespace std;
int main(){
	//Binary to Decimal
	int num,rem;
	cout<<"enter a number: ";
	cin>>num;
	int ans=0,mul=1;
	while(num>0){
		rem=num%10;
		num=num/10;
		ans=rem*mul+ans;
		mul=mul*2;
	}
	cout<<ans<<endl;
	
	//Decimal to Octal
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
