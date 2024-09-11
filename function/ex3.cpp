#include<iostream>
using namespace std;

void fun(int a, int b) //formal parameter
{
	cout<<a<<endl<<b;
}
int main(){
	fun(10,20); // actual parameter
	return 0;
}
