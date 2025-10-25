#include<iostream>
using namespace std;
int main(){
	for(char row='a'; row<='d'; row=row+1){
		for(int col=1; col<=4; col++){
			cout<<row<<" ";
		}
		cout<<endl;
	}
	return 0;
}
