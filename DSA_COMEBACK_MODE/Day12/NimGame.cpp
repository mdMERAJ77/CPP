#include<iostream>
using namespace std;

bool canWinNim(int n){
	if(n%4==0){
		return false;
	}
	else{
		return true;
	}
}

int main(){
	int n;
	cout<<"enter a positive digit:";
	cin>>n;
	cout<<canWinNim(n);
	return 0;
}
