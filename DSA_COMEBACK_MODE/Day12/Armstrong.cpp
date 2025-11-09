#include<iostream>
#include<cmath>
using namespace std;

bool armstrong(int num){
	int ans=0,rem,count=0;
	int n=num;
	while(n>0){
		n=n/10;
		count++;
	}
	n=num; //reset n for second loop;
	while(n>0){
		rem=n%10;
		n=n/10;
		ans=ans+pow(rem,count);
	}
	if(ans==num){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	int num;
	cout<<"enter a number: ";
	cin>>num;
	cout<<armstrong(num);
	return 0;
}
