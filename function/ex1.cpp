#include<iostream>
using namespace std;
int c=20; //extern(global)

int fun(){
	 int a=10;
	static int b=10;
	cout<<a<<ends<<" "<<b<<endl;
	++a; ++b;
	
}

int main(){
	fun();  //function fun calling
	fun();
	fun();
	fun();
	return 0;
} 


