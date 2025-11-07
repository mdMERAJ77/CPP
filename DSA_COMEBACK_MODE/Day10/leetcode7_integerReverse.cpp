#include<iostream>
using namespace std;
int main(){
	int num,rem,ans=0;
	cout<<"enter a number: ";
	cin>>num;
	while(num!=0){
		rem=num%10;
		num=num/10;
		ans=ans*10+rem;
	}
	cout<<"is reverse number: "<<ans;
	return 0;
}
