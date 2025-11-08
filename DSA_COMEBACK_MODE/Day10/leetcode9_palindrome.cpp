#include<iostream>
using namespace std;
int main(){
	int num,copy,rem;
	long ans=0; // to handle integer overflow
	cout<<"enter a number: ";
	cin>>num;
	copy=num;
	while(num>0){
		rem=num%10;
		num=num/10;
		ans=ans*10+rem;
	}
	if(ans==copy){
		cout<<"is palindrome: "<<ans;
		return 0;
	}
	else{
		cout<<"is not a palindrome: "<<ans;
		return 0;
	}
	return 0;
}
