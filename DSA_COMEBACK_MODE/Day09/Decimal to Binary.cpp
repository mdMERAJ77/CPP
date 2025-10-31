#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter a number: ";
	cin>>num;
	
	int rem,ans=0,mul=1;
	while(num>0){
		//remainder
		rem=num%2;
		//quotient
		num=num/2;
		//ans
		ans=rem*mul+ans;
		//multiple with 10
		mul=mul*10;
	}
	cout<<ans<<endl;
	return 0;
}
