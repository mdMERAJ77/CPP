#include<iostream>
using namespace std;

bool isRectangle(int a,int b,int c,int d){
	if((a==b && c==d) || (a==c && b==d) || (a==d && b==c)){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int a,b,c,d;
	cout<<"enter 4 positive integer: ";
	cin>>a>>b>>c>>d;
	cout<<isRectangle(a,b,c,d);
}
