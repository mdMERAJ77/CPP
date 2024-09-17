#include<iostream>
using namespace std;
int main(){
	for(int i=0; i<4; i++){
		for(int j=0; j<4-i-1; j++){ //space n-i-1
			cout<<" ";
		}
		for(int j=1; j<=i+1; j++){ // num1--> i+1
			cout<<j;
		}
		for(int j=i; j>=1; j--){ //num2---> j>=1
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}
