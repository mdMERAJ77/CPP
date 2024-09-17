#include<iostream>
using namespace std;
int main(){
	
	int outer,inner;
	cout<<"Enter a outer loop number ";
	cin>>outer;
	cout<<"Enter a inner loop number ";
	cin>>inner;
	for(int i=1; i<=outer;i++){
		int x;
		
		for(int j=1; j<=inner; j++){
			cout<<x++<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
