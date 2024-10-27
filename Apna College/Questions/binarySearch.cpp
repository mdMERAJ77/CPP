#include<iostream>
#include<vector>
using namespace std;

// function binarySearch
int binarySearch(vector<int> arr, int target){
	int start=0, end=arr.size()-1;
	
	while(start<=end){
		//step1: find mid
		int	mid=(start + end)/2;
		
		//step2
		if(target > arr[mid]){
			start = mid+1;
		}
		
		//step3
		else if(target < arr[mid]){
			end =mid-1;
		}
		
		//step4
		else{
			return mid;
		}
	}
	
	//step5
	return -1;
}

int main(){
	vector<int> arr1 ={-1,0,3,4,5,9,12}; //odd
	int target_1 =12;
	
	vector<int> arr2 ={-1,0,3,4,5,9}; //even
	int target_2 = 0;
	
	//call the function: binarySearch()
	cout<<"target found at index: "<<binarySearch(arr1, target_1)<<endl; //odd
	
	cout<<"target found at index: "<<binarySearch(arr2, target_2)<<endl; //even

	return 0;
}
