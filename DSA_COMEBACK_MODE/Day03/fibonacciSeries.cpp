#include<iostream>
using namespace std;
int main(){
	cout<<"enter a number for fibonacci series: ";
	int n;
	cin>>n;
	int first=0;
	int second=1;
	cout<<first<<" "<<second;
	int next=0;
	for(int i=2;i<=n;i++){
		
		next=first+second;
		first=second;
		second=next;
		cout<<" "<<next;
		
	}
	return 0;
}
