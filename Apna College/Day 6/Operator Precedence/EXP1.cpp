#include<iostream>
using namespace std;
int main(){
	int m=10,n=10;
	int result=m++/(++n * n--)/--m;
	cout<<result;
	return 0;
}
