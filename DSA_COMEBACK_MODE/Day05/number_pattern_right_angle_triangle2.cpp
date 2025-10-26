#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a number to print number pattern in right angle triangle: ";
	cin>>n;
	for(int row=1; row<=n; row++){
		//print space
		for(int col=1; col<=n-row; col++){
			cout<<"  ";
		}
		//print number
		for(int col=1; col<=row; col++){
			cout<<col<<" ";
		}
		cout<<endl;
	}
	return 0;
}
