#include<iostream>
using namespace std;
int main(){
	int countVar=1;
	for(int row=1; row<=4; row++){
		for(int col=1; col<=5; col++){
			cout<<countVar<<" ";
			countVar++;
		}
		cout<<endl;
	}
	return 0;
}
