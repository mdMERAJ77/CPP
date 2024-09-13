#include<iostream>
using namespace std;

class A{
	public:
	A(int a, int b){ //parametrized constructor
		cout<<"sum is "<<a+b;
	}
};

int main(){
//	A obj(1,2);
	A obj=A(1,2); Constructor initialize the object
	return 0;
}
