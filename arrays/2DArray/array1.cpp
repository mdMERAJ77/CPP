#include<iostream>
using namespace std;

int main(){
	int a[2][2];
	cout<<"Enter array elements ";
	
	//user input
	for(int i=0; i<2; i++){
		
		for(int j=0; j<2; j++){
			cin>>a[i][j];
		}
	}
	
	// output display
	cout<<"\n2D Array Elements is : \n";
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
