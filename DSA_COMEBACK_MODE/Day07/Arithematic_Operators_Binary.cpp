#include<iostream>
using namespace std;
int main(){
	cout<<13/2<<endl; //6 // division
	cout<<13%2<<endl; //1 // remainder 
	
	cout<<2*12.2<<endl; //25.4 // int*float = float
	
	//same precedence:  * / % 
	//same precedence:  + -
	
	//Note: if both Precedence same then how will we solve the problem??
	//we are using Associativity rule he said that solve the problem LEFT ---> RIGHT
	
//example: 2*3-4/2 //rule one check precedence if both precedence same then solve left to right
	
	//2*3-4/2 --> 6-4/2  --> 6-2 final answer: 4
	cout<<2*3-4/2<<endl;  //4
	cout<<3+4-6-2; //7-6-2 --> 1-2 --> -1
	
	return 0;
}
