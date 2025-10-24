#include<iostream>
using namespace std;
int main(){
	cout<<"enter a number: ";
	int num1;
	cin>>num1;
	int sum=0;
	for(int i=1;i<=num1;i++){
		sum=sum+i;
	};
	cout<<sum;
	
	
//	int num2;
//	cin>>num2;
	//OPTIMIZE WAY TO CALCULATE SUM OF NATURAL NUMBER
//		cout<<(num2*(num2+1))/2;

	return 0;
}
