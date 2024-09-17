#include<iostream>
using namespace std;
	
	int add(int a, int b){ //return type
		int sum=a+b;
		return sum;
	}
	
int main(){
	cout<<add(2,5)<<endl;
	cout<<add(3,8); //arguments
	
	return 0;
}
