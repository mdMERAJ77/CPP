#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<"enter a size of array between[1-100]: ";
	cin>>size;
	int arr[100]; //int arr[size]; why doesn't use because not good for memory we will study next class why???
	cout<<"enter a number: ";
	//user input
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	//display on screen
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
