#include<iostream>
using namespace std;
void changeX(int x){
		x=2*x;
		cout<<"copy arguments = "<<x<<endl;
	}
int main(){
	int x=5;
	changeX(x);
	cout<<"original value ="<<x<<endl;
	
}
