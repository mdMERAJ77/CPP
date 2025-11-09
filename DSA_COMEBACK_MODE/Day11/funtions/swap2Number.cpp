#include<iostream>
using namespace std;

//&m, &n this is called pass by reference(point same mememory address)
void swap(int &m, int &n){
	m=m+n;
	n=m-n;
	m=m-n;
}

int main(){
	int a,b;
	cout<<"enter a 2 number: ";
	cin>>a>>b;
	swap(a,b);
	cout<<"swap: "<<a<<" "<<b;
	return 0;
}
