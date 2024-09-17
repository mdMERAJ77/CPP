#include<iostream>
using namespace std;
int main(){
	cout<<"Enter a number ";
	int num;
	cin>>num;
	for(int i=1; i<=num; i++){
		for(int j=i; j>=1; j--){
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}
