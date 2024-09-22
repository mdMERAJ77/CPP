#include<iostream>
using namespace std;

int main(){
	//find smallest value in array
	int size[6]={2,4,-1,4,-2,5};
//	int INT_MAX;
	int smallest =INT_MAX;
	
	for(int i=0; i<5; i++){
		if(size[i]<smallest){
			smallest=size[i];
		}
	}
	cout<<smallest;
}
