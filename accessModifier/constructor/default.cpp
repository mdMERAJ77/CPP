#include<iostream>
using namespace std;

class A{
	public:
		A(){ //default constructor. NOTE:- class name and default constructor name must be same
			cout<<"default constructor..."<<endl;
		}	
};

int main(){
	A obj;
	return 0;
}
