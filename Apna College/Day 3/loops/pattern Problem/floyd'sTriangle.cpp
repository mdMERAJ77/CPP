#include<iostream>
using namespace std;
int main(){
	cout<<"Enter a number ";
	int num;
	cin>>num;
	for(int i=1; i<=num; i++){
		int x;
		
		for(int j=1; j<=i; j++){
			cout<<x++<<" ";
		}
		cout<<endl;
	}
	return 0;
}
