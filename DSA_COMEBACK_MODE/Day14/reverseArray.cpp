#include<iostream>
using namespace std;
int main(){
	int arr[5]={4,9,3,1,5};
	int i=0,j=4;
	while(j>i){
		swap(arr[i],arr[j]);
		i++;
		j--;
	}
	//print reverse array
	for(int i=0; i<5; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
