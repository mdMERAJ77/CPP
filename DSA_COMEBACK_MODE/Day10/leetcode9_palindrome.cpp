#include<iostream>
#include <climits>
using namespace std;
int main(){
	int num,copy,rem;
	//long ans=0; // second way to handle integer overflow
	int ans=0;
	cout<<"enter a number: ";
	cin>>num;
	copy=num;
	while(num>0){
		rem=num%10;
		num=num/10;
		if(ans>INT_MAX/10){ // handle integer overflow
			cout<<"is not a palindrome";
			return 0;
		}
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
