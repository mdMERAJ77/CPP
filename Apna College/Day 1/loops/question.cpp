#include<iostream>
using namespace std;
int main(){
	int num,sum=0;
	cout<<"Enter a number range 1 to 5"<<endl;
	cin>>num;
	for(int i=1; i<=num; i++){
		sum = sum+i; //sum+=i;
		if(i==5){
			break;
		}
	}
	cout<<sum;
	return 0;
}
