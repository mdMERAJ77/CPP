#include <iostream>
using namespace std;
int main(){
	cout<<"Enter a number ";
	int num;
	cin>>num;
	for(int i=0;i<num;i++ ){
		for(int i=0; i<num;i++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
