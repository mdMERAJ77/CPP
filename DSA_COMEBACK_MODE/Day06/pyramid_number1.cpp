#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a number to print pyramid number: ";
	cin>>n;
	for(int row=1; row<=n; row++){
		//space
		for(int col=1; col<=n-row; col++){
			cout<<"  ";
		}
		//number print 1 to row increasing order
		for(int col=1; col<=row; col++){
			cout<<col<<" ";
		}
		//number print (row-1) to 1 decreasing order
		for(int col=row-1; col>=1; col-- ){
			cout<<col<<" ";
		}
		cout<<endl;
	}
	return 0;
}
