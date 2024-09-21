#include<iostream>
using namespace std;
int main(){
	
	//note system(pc) must be  64-bit architecture.
	int x;
	cout<<sizeof(x)<<endl;
	cout<<sizeof(long (x))<<endl; //not give accurate vlaue because compiler not support
	
	cout<<sizeof(short)<<endl;
	int age=15;
	cout<<sizeof(short(age))<<endl;
	
	cout<<sizeof(long long)<<endl;
	
	//difference between signed and unsigend
	unsigned int num=-1;
	int x1=num;
	cout<<num<<", "<<x1;
	return 0;
}
