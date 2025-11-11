#include<iostream>
using namespace std;
int main(){
	int arr[5]={4,2,9,7,1};
	
	int firstMax=INT_MIN;
	int secondMax=INT_MIN;
	
	for(int i=0; i<5; i++){
		if(arr[i]>firstMax){
			firstMax=arr[i];
		}
		else if(arr[i]>secondMax && arr[i]!=firstMax){
			secondMax=arr[i];
		}
	}
	cout<<"second largest value: "<<secondMax;
	return 0;
}
