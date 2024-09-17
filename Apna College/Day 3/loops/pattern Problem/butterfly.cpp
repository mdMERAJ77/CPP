#include<iostream>
using namespace std;
int main(){
	for(int i=0; i<4; i++){
		for(int j=0; j<4-i-1; j++){
			cout<<" ";
		}
		for(int j=1; j<i+1; j++){
			cout<<j;
		}
		for(int j=i; j<=i; j--){
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}
