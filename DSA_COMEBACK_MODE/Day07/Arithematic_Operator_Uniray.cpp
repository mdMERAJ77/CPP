#include<iostream>
using namespace std;
int main(){
	int a=10;
	//post increment
	int b=a++;
	cout<<b<<endl; //10
	cout<<a<<endl; // 11
	
	//pre increment
	int a1=10;
	int b1=++a1;
	cout<<a1<<endl;  //11
	cout<<b1<<endl; //11
	
	//post decrement
	int a3=10;
	int b3=a3--;
	cout<<b3<<endl; //10
	cout<<a3<<endl; //9
	
	int a4=10;
	int b4=--a4;
	cout<<a4<<endl; //9
	cout<<b4<<endl; //9
	
	
	return 0;
}
