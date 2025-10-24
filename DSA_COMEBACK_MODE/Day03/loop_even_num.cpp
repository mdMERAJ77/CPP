#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter a number to print even number: ";
	cin>>num;
	for(int i= 2; i<=num; i=i+2){
//		cout<<"even number is: "<<i*2<<endl;
		cout<<i<<endl;
	};
	return 0;
}
