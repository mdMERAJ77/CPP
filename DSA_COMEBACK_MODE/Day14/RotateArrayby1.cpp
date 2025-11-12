#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter array size: ";
	cin>>n;
	int arr[n]; //int arr[1000] //best way to store
	//user input
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	//store last index value
	int lastIndex=arr[n-1];
	//shift index to right
	for(int i=n-2;i>=0;i--){
		arr[i+1]=arr[i];
		
	}
	//assign last index into first index
	arr[0]=lastIndex;
	
	//print array
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
