#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a number: ";
	cin>>n;
	if(n<0){
		goto negative; //jump to label "negative"
	}
	else{
		cout<<"you entered positive number";
		return 0;
	}
	//negative label
	negative:{
		cout<<"you entered negative number";
		return 0;
	}
	return 0;
}
