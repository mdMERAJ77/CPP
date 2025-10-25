#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter a number to print even number: ";
	cin>>num;
	for(int i= 2; i<=num; i=i+2){
		cout<<i<<endl;
	};
	return 0;
}
