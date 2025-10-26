#include<iostream>
using namespace std;
int main(){
	char alphabet;
	cout<<"enter a number to print alphabet(A-Z or a-z): ";
	cin>>alphabet;
	char start;
	if(alphabet>='A' && alphabet<='Z'){
		start='A';
	}
	else{
		start='a';
	}
	for(char row=start; row<=alphabet; row++){
		//print space
		for(int col=1; col<=alphabet-row; col++){ //very important line check is please once time carefully
			cout<<"  ";
		}
		for(char col=start; col<=row; col++){
			cout<<col<<" ";
		}
		cout<<endl;
	}
	return 0;
}
