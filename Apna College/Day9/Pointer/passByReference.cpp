#include<iostream>
using namespace std;
int changePointer(int *ptr){	//pass by reference using pointer
	*ptr=20;
}
int changeAlias(int &b){ //pass by reference using alias
	b=20;
}
int main(){
	
	int a=10;
	//changeA(&a);
	changeAlias(a);
	
	cout<<a<<endl;
	return 0;
}
