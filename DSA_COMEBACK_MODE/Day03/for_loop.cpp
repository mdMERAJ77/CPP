#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a number for loop: ";
	cin>>n;
	for(int i = 1; i<=n; i++){
		cout<<i<<" square is: "<<i*i<<endl;
	}
	return 0;
}
