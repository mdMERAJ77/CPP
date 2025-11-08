#include<iostream>
#include<climits>
using namespace std;
int main(){
	int num,ans=0,rem,mul=1;
	cout<<"enter a number: ";
	cin>>num;
	if(num==0){
		cout<<"1";
		return 0;
	}
	while(num>0){
		rem=num%2;
		if(rem==1){
			rem=0*mul;
		}
		else{
			rem=1*mul;
		}
		num=num/2;
		ans=ans+rem;
		mul=mul*2;
	}
	cout<<ans;
	return 0;
}
