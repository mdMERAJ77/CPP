#include<iostream>
using namespace std;
int main(){
	for(int i=0; i<4;i++){
		for(int j=3; j>i; j--){
			cout<<"-";
		}
		for(int j=1; j<=i+1; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
