#include<iostream>
using namespace std;

//prime function declaration+define
bool prime(int n){
		if(n<2){
			return 0;
		}
		for(int i=2;i<=(n/2);i++){
			if(n%i==0){
				return 0;
			}
			else{
				return 1;
			}
		}
	}
//factorail function declaration+define
int factorial(int n){
	int ans=1;
	for(int i=1; i<=n; i++){
		ans=ans*i;
	}
	return ans;
}
int main(){	
	int a,b;
	cout<<"enter a number: ";
	cin>>a;
	int ans=prime(a);
	cout<<ans<<endl;
	
	//factorial function called here
	cout<<"enter a number: ";
	cin>>b;
	cout<<(factorial(b));
	return 0;
}
