#include<iostream>
using namespace std;
int main(){
	// true ---> 1
	// flase---> 0
	
	cout<<(2>5 || 2<5)<<endl; // true 
	cout<<(2>5 && 2<5)<<endl; //false
	cout<<(!(2>5))<<endl; //true
	cout<<(!(2<5));//false
}
