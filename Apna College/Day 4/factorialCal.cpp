#include<iostream>
using namespace std;



int factorialCal(int n){
	int fact=1;
	for(int i=1; i<=n; i++){
	 	fact*=i;
	}
	return fact;
	
}

int main(){
	cout<< factorialCal(4)<<endl;
	cout<< factorialCal(5);
	return 0;
}
