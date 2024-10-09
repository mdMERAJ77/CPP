#include<iostream>
using namespace std;
int main(){
	int arr[5]={1,2,3};
	int n=5;
	int maxsub=INT_MIN;
	
	for(int start=0; start<n; start++){
		int currsum=0;
		for(int end=start; end<n; end++){
			currsum=currsum+arr[end];
			maxsub=max(currsum,maxsub);
		}
	}
	cout<<maxsub;
	
	
	return 0;
}
