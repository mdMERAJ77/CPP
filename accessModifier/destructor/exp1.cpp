#include<iostream>
using namespace std;
int count=0;
class A{
	
	public:
		A(){
			cout<<"object "<<++count<<" created"<<endl;	
			
		}
		
		
		~A(){
			cout<<"object "<<count--<<" deleted"<<endl;
		}
};

int main(){
	A obj,obj1,obj2;
	
}
