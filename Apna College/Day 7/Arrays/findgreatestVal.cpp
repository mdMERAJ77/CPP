#include<iostream>
using namespace std;
int main(){
	
	int size[5]={2,-10,-4,7,1};
	
	int greatest=INT_MIN;
	for(int i=0;i<5;i++){
//		if(size[i]>greatest){
//			greatest=size[i];
//		}
	    greatest=max(size[i],greatest);
	}
	cout<<greatest;
	
	return 0;
}
