#include<iostream> 
using namespace std;

int DecimalTobinary(int num){
	int pow=1,ans=0;
	int rem;
	
	
	while(num>0){
		rem=num%2;
		num=num/2;
	
		ans=ans+(rem*pow);
		pow*=10;
			
	}
	return ans;
}

int main(){	
//	int num;
//	cin>>num;
	DecimalTobinary(10);
	for(int i=1; i<=10; i++){
		cout<<binaryToDecimal(i)<<endl;
	}
	return 0;
}
