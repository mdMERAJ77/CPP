#include<iostream>
using namespace std;

int sumNum(int n){
	int sum=0;
	for(int i=0;i<=n; i++){
		sum+=i;
	}
	return sum;
	cout<<"hello"; //not run because stack deleted
}

int main(){
	cout<< sumNum(5)<<endl;
	cout<< sumNum(10)<<endl;
	return 0;
}
