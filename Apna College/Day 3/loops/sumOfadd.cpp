#include<iostream>
using namespace std;
int main(){
	int num,sum=0;
	cout<<"Enter a number"<<endl;
	cin>>num;
	
	for(int i=0; i<=num; i++){
		if((i%2)!=0){
			sum=sum+i;
			
		}
	}
	cout<<sum<<endl;
	return 0;
}
