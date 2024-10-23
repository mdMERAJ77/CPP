#include<iostream>
using namespace std;
int main(){
	int a=10;
	cout<<&a<<"= "<<a<<endl;
	cout<<*(&a)<<endl;
	// create a pointer of a
	int* ptr =&a;
	cout<<&ptr<<"= "<<*ptr<<endl;
	
	int** ptr2=&ptr;
	cout<<&ptr2<<"= "<<**ptr2<<endl;
	
	cout<<**(&ptr)<<endl;
	
	// Null Pointer:A pointer that doesn't point ot any loacation
	int *x=NULL;
	cout<<x<<endl;
	
	//Predic Output
	int a1=5;	//a=variable
	int *p=&a1; //p=variable
	int **q=&p; //q=variable
	
	cout<<*p<<endl; //value of a
	cout<<**q<<endl; //value of p
	cout<<p<<endl; //value of 
	cout<<*q<<endl; //address of pointer p
	return 0;
}
