#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter a number: ";
	cin>>num;
	int rem,ans=0,mul=1;
	while(num>0){
		//remainder
		rem=num%2; //we also use bitwise AND: num&1
		
		//quotient
		num=num/2; //we also use right shift operator: num>>1 
		
		//logic to convert Decimal to Binary form
		ans=rem*mul+ans;
		mul=mul*10;
	}
	cout<<ans;
	return 0;
}
