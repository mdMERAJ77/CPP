#include<iostream>
using namespace std;

void changeArr(int arr[], int size){
	for(int i=0; i<size; i++){
		 arr[i]=2*arr[i];
	}
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	
	int arr[]={1,2,3};
	changeArr(arr,3);
	for(int i=0; i<3;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
