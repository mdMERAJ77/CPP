#include<iostream>
using namespace std;

int d =10; //global till the terminate of program
void fun(){ //definition
	auto int a=10;	// still block is active
	register int b=10;
	
	static int c =10; // till the terminate of program
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	a++; b++; c++; d++;
}
int main(){
	fun(); // 10 10
	fun(); //10 11
	fun(); //10 12
	fun(); //10 13
	
	//NOTE:- static variable value continue increased but
			//auto(local)variable value reinitialized the function when call
	
	return 0;
}
