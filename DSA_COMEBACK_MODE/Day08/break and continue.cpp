#include<iostream>
using namespace std;
int main(){
	//break: exit the loop or jump outside the loop
	//continue: skip current value and go for next iteration
	
	//break
	cout<<"break: ";
	for(int i=1;i<=5;i++){
		if(i==3)break; // exit loop or jump outside the loop
		cout<<i<<" ";
	}
	
	cout<<endl<<"continue: ";
	//continue
	for(int i=1;i<=5;i++){
		if(i==3)continue;  //skip 3 and go for next iteration
		cout<<i<<" ";
	}
	return 0;
}
