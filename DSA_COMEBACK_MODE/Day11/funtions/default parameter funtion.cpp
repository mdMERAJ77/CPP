#include<iostream>
using namespace std;

int fact(int n=5){ //default parameter
	int ans=1;
	for(int i=1; i<=n; i++){
		ans=ans*i;
	}
	return ans;
}
int main(){
	cout<<fact();//without parameter
	return 0;
}
