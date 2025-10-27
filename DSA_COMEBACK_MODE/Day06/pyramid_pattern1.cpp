#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a number to print pyramid: ";
	cin>>n;
	for(int row=1; row<=n; row++){
		//space
		for(int col=1; col<=n-row; col++){
			cout<<"  "; //here 2space means:-> 2times tab press
		}
		//start
		for(int col=1; col<=(2*row)-1; col++){
			cout<<" *";
		}
		cout<<endl;
	}
	return 0;
}
