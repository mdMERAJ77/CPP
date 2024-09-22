#include<iostream>
using namespace std;
int main(){
	int marks[5]={33,44,54,32,76};
	//int marks[]={23,45,34,74,}  //second way to create array
	//cout<<marks[0];
	
	//loop on array
	for(int i=0;i<5; i++){
		cout<<marks[i]<<" "<<endl;
	}
	
	
	
	//user input size of array
	int size;
	cout<<"enter size of array ";		
	cin>>size;
	
	int studentRoll[size];
	
	for(int i=0;i<size; i++){
		cin>>studentRoll[i];
	}
	//print the array
	for(int i=0; i<size;i++){
		cout<<studentRoll[i]<<" ";
	}	
	return 0;
	
}
