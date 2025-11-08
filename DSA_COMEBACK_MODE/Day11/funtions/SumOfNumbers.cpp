#include<iostream>
using namespace std;

//function declaration
int Sum(int a, int b){
	int ans=a+b;
	return ans;
}

int main(){
	int m,n;
	cout<<"enter a two number: ";
	cin>>m>>n;
	cout<<Sum(m,n); //function calls here
	return 0;
}
