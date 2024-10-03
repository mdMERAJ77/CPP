#include<iostream>
using namespace std;
int target = 9;
int linearSearch(int arr[], int size){
	for(int i=0; i<size; i++){
		if(arr[i]==target){
			return i;
		}
	}
	return -1;
}
int main(){
	
	int arr[]={2,4,6,9,15,2};
	int index=linearSearch(arr,6);
	cout<<index;
	return 0;
}
