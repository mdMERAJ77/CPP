#include<iostream>
using namespace std;
void revArr(int arr[], int size){
	int start=0; int end=size-1;
	while(start<end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}
int main(){
	int arr[]={1,2,3};
	int size=3;
	revArr(arr,size);
	for(int i=0; i<size;i++){
		cout<<arr[i]<<" ";
	}
}
