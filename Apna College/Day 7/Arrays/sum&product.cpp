#include<iostream>
using namespace std;
//int sum=0;
//int product=1;   
//Conflict:
//Global sum and function sum have the same name, so the compiler gets confused 
//about whether you're referring to the global variable or the function.
//Global product and function product have the same name, leading to the same issue.


	int sum(int arr[], int size){
		int sum=0;  
//No Naming Conflict:
//Since the sum and product inside the functions are local, there’s no conflict 
//with any global variables or functions named sum or product.
//The global sum and product, if they existed, would be ignored inside the functions
// because the local variables with the same name are used instead.
		for(int i=0; i<size; i++){
			sum=arr[i]+sum;
			
		}
		return sum;
	}
	int product(int arr[],int size){
		int product=1;
		for(int i=0; i<size; i++){
			product=arr[i]*product;
			
		}
		return product;
	}
int main(){
	int arr[]={1,0,3,0};
	int size=4;
	cout<<sum(arr,size)<<endl;
	cout<<product(arr,size);
	return 0;
}
