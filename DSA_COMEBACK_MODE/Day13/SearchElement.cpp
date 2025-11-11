#include<iostream>
using namespace std;
int main(){
	int arr[5]={2,4,1,3,5};
	int find=1;
	for(int i=0; i<5; i++){
		if(arr[i]==find){
			cout<<i;
			return 0;
		}
	}
	return 0;
}
