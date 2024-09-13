#include<iostream>
using namespace std;

class A{
	private:
		int a;
		
	protected:
		int b;
		
	public:
		int c;
};
int main(){
	A obj;
	//obj.a=1; //private not access
	//obj.b=2; //protected not access. only access inherit class
	obj.c=3; //anyone access this is public
	
	//cout<<a<<endl; //error
	//cout<<b<<endl; //error
	cout<<obj.c; //execute successfully
	
	return 0;
}
