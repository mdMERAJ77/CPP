#include<iostream>
using namespace std;


int sumOfDigit(int digit){
		int sum=0;
		while(digit>0){
			int rem=digit%10;
			sum=sum+rem;
			digit=digit/10;
		}
		return sum;
		
}
int main(){	
	
	cout<<sumOfDigit(145);
	return 0;
}
