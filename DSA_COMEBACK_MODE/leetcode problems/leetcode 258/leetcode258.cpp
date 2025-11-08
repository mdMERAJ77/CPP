#include<iostream>
using namespace std;
int main(){
	cout<<"enter a number: ";
	int num,ans=0,rem;
	cin>>num;
	while(num>9){
		while(num>0){
			rem=num%10;
			num=num/10;
			ans=ans+rem;
		}
		num=ans;
		ans=0;
	}
	cout<<num;
	return 0;
}
