#include<iostream>
using namespace std;

void unique(int arr[], int size){
	for(int i=0; i<size; i++){
		for(int j=1; j<=size; j++){
			if(arr[i]!=arr[j]){
				cout<<"isunique"<<" ";
			}
			else{
				cout<<"is not unique"<<" ";
			}
		}
	}
}
int main(){
	int arr[]={1,20,3,2,3,1,4};
	int size=sizeof(arr)/sizeof(arr[0]);
	unique(arr,size);
	return 0;
}
