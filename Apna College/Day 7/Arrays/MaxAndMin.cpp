#include<iostream>
#include<climits>  // for INT_MAX and INT_MIN
using namespace std;

void maxAndMin(int arr[], int size, int &min, int &max){
	min = INT_MAX;
	max = INT_MIN;

	for(int i = 0; i < size; i++){
		if(arr[i] < min){
			min = arr[i];
		}
		if(arr[i] > max){
			max = arr[i];
		}
	}
}

int main(){
	int arr[] = {2, 1, 3,7,1,2,0,8,9,5};
	int size = sizeof(arr) / sizeof(arr[0]);
	//sizeof(arr) gives the total size of the array in bytes.
	//sizeof(arr[0]) gives the size of one element in the array.
	//Dividing these gives the total number of elements in the array.
	int max, min;

	maxAndMin(arr, size, min, max);  // Correct call without returning anything
	
	// Print the values directly in main
	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;

	return 0;
}

