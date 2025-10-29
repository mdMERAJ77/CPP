#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter number (0 to stop): ";
	cin>>n;
	while(n!=0){
		cout<<"You entered: "<<n<<endl;
		cout<<"enter number (0 to stop): ";
		cin>>n;
	}
	cout<<"You entered 0 So, while loop ended successfully";
	return 0;
}

