#include<iostream>
using namespace std;
int main(){
	int a=5,b=2;
	cout<<a/b<<endl;  //output expected 2.5 but output return 2
	
	//how to fix?
	int x=5;
	float y=2; //use float or double
	cout<<x/y; //output expected 2.5 and output return 2.5
	return 0;
}
