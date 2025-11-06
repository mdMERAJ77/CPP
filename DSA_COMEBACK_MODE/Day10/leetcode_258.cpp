#include<iostream>
using namespace std;
int main(){
	int ans=0,rem,num;
	cout<<"enter a number: ";
	cin>>num;
	if(num==0){
		cout<<"you have entered 0: "<<num;
		return 0;
	}
	while(num>9){
		while(num>0){
			rem=num%10;
			num=num/10;
			ans=ans+rem;
		}
		cout<<ans<<endl;
		num=ans;
		ans=0;
	}
	return 0;
}
