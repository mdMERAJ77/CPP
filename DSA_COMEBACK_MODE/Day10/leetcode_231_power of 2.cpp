#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter a number: ";
	cin>>num;
	if(num<1){
		cout<<"false";
		return 0;
	}
	while(num!=1){
		if(num%2==1){
			cout<<"false";
			return 0;
		}
		num=num/2;
	}
	cout<<"true";
	return 0;
}
