#include<iostream>
using namespace std;

//&a,&b this is called pass by reference(point same mememory address)
void swap(int &a, int &b){
	a=a+b;
	b=a-b;
	a=a-b;
}

int main(){
	int a,b;
	cout<<"enter a 2 number: ";
	cin>>a>>b;
	swap(a,b);
	cout<<"swap: "<<a<<" "<<b;
	return 0;
}
