//max and min
#include<iostream>
using namespace std;

int getMax(int arr[], int size){
	int max=INT_MIN;
	for(int i=0; i<size; i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	//returing value
	return max;
}
int getMin(int arr[], int size){
	//int min=INT_MAX;
	int mini;
	for(int i=0; i<size; i++){
//		if(min>arr[i]){
//			min=arr[i];
//		}
		 mini =min(mini,arr[i]);
	}
	return mini;
}

int main(){
	int size;
	cout<<"Enter a size of array"<<endl;
	cin>>size;
	int arr[size];
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	
	
	cout<<"max value is "<<getMax(arr,size)<<endl;
	cout<<"min value is "<<getMin(arr,size)<<endl;
	cout<<"Successfully Done";
		return 0;
}
