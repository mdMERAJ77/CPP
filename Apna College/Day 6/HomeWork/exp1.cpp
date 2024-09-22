#include<iostream>
using namespace std;
bool ispoweroftwo(){
	 int n;
	 cout<<"Enter a postive number "<<endl;
	 cin>>n;	 
	 return ((n&(n-1))==0 && n>0);
}
int main(){
	
	bool out=ispoweroftwo();
	cout<<out; //print 1(true), 0(false)
	return 0;
}
