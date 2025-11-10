#include<iostream>
using namespace std;
int main(){
	int arr[5]={4,2,7,1,0};
	int ans=INT_MIN;
	for(int i=0; i<5; i++){
		if(arr[i]>ans){
			ans=arr[i];
		}	
	}
	cout<<"max value: "<<ans;
	return 0;
}
