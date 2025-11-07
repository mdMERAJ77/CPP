#include<iostream>
using namespace std;
int main(){
	int num,rem,ans=0;
	cout<<"enter a number: ";
	cin>>num;
	while(num!=0){
		rem=num%10;
		num=num/10;
		//if you have 32 bit integer then how to handle integer overflow:
		//1: ans>INT_MAX/10
		//2: ans<INT_MIN/10
		if(ans>INT_MAX || ans<INT_MIN){
			return 0;
		}
		ans=ans*10+rem;
	}
	cout<<"is reverse number: "<<ans;
	return 0;
}
