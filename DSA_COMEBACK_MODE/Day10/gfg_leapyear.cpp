#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter a year: ";
	cin>>num;
	while(num>0){
		if(num%400==0){
			cout<<"is leap year";
			return 0;
		}
		else if(num%4==0 && num%100!=0){
			cout<<"is leap year";
			return 0;
		}
		else{
			cout<<"is not leap year";
			return 0;
		}
	}
	return 0;
}
