#include<iostream>
using namespace std;
int main(){
	int arr[5]={1,2,3,5,6};
	int sum=0,indexSum=0;
	//sum of natural number upto n=6;
	sum=6*(6+1)/2; //formula of sum: n*(n+1)/2
	for(int i=0; i<5; i++){
		indexSum=indexSum+arr[i];
	}
	cout<<"missing number is: "<<sum-indexSum;
	return 0;
}
