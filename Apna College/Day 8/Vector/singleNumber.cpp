#include<iostream>
#include<vector>
using namespace std;
int main(){
	int arr[]={1,2,3,4,2,1,3};
	int size=sizeof(arr)/sizeof(arr[0]);
	int ans=0;
	for(int i=0; i<size; i++){
		ans=ans^arr[i];
	}
	cout<<ans;
	return 0;
}
