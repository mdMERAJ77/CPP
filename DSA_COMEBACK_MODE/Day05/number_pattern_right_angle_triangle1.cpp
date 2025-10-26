#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a number to print a number pattern right angle triangle: ";
	cin>>n;
	for(int row=1; row<=n; row++){
		//print space
		for(int col=1; col<=n-row; col++){
			cout<<"  ";
		}
		//print number
		for(int col=1; col<=row; col++){
			cout<<row<<" ";
		}
		cout<<endl;
	}
	return 0;
}
