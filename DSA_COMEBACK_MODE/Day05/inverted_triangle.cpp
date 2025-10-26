#include<iostream>
using namespace std;
int main(){
	for(int row=1; row<=4; row++){
		for(int col=4; col>=row; col--){
			cout<<" * ";
		}
		cout<<endl;
	}
	return 0;
	
}
