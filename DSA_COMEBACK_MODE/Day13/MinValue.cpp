#include<iostream>
using namespace std;
int main(){
	int arr[5]={3,2,1,4,5};
	int ans=INT_MAX;
	
	for(int i=0; i<5; i++){
		if(arr[i]<ans){
			ans=arr[i];
		}
	}
	cout<<"minimum value: "<<ans;
	return 0;
}
