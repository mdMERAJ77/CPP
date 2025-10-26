#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number to print right angle triange: ";
	cin>>n;
	if(n<=1){
		cout<<"please at least 2 number I need to perform right angle triange";
		return 0;
	}
	for(int row=1; row<=n; row++){
		//print space
		for(int col=1; col<=n-row; col++){
		//logic 1 :- if you want no space between space and star then use it this logic
		//cout<<" ";
		
		//logic 2 :- if you want to space between space and start then use it this logic
		cout<<"  ";
		}
		//print star
		for(int col=1; col<=row; col++){
			//logic 1
			//cout<<"*"; //please proper set space do not write like that " * " wrong correct way is "*"
			
			//logic 2
			//if you want some space between stat then use it this logic
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
