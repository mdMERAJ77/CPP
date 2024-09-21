#include<iostream>
using namespace std;

int binaryToDecimal(int num){
	int pow=1,ans=0;
	int rem;
	
	
	while(num>0){
		rem=num%10;
		num=num/10;
		
		ans=ans+rem*pow;		
		pow=pow*2;
			
	}
	return ans;
}

int main(){	
//	int num;
//	cin>>num;
	cout<<binaryToDecimal(111);
	
	return 0;
}
