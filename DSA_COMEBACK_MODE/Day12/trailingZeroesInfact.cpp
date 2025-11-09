#include<iostream>
using namespace std;
//function: trailing zeroes in factorial.   (to find zeroes in factorial)
int TZ_in_Factorial(int n){
	int ans=0;
	while(n>=5){
		n=n/5;
		ans=ans+n;
	}
	return ans;
}
int main(){
	int num;
	cin>>num;
	cout<<TZ_in_Factorial(num);
	return 0;
}
