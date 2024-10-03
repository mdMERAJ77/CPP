#include<iostream>
using namespace std;

void update(int arr[], int size){
	cout<<"here update zero index"<<endl;
	arr[0]=10;
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	
}
int main(){
	int arr[3]={1,2,3};
	update(arr,3);
	
	cout<<"main function update: "<<endl;
	for(int i=0; i<3; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
