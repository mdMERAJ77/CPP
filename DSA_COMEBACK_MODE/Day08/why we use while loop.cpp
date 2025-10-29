#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter number (0 to stop): ";
	cin>>num;
	while(num!=0){
		cout<<"You entered: "<<num<<endl;
		cout<<"enter number (0 to stop): ";
		cin>>num;
	}
	cout<<"You entered 0 So, while loop ended successfully";
	return 0;
}

