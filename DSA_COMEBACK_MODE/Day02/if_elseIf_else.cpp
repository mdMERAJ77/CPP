#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter a number to check is positive or negative or zero: ";
	cin>>num;
	if(num>0){
		cout<<"postive";
	}
	else if(num<0){
		cout<<"negative";
	}
	else{
		cout<<"zero";
	}
}
