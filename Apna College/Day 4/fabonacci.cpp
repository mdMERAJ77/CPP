#include<iostream>
using namespace std;
int main(){
	int first=0, second=1,third=0;
	cout<<"Enter a number ";
	int n;
	cin>>n;
	cout<<first<<" "<<second;
	for(int i=0; i<n; i++){
		third=first+second;
		cout<<" "<<third<<" ";
		
		first=second;
		second=third;
		
		
	}

	
	return 0;
}
