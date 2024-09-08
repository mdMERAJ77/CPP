#include <iostream>
using namespace std;

int main(){
	int age;
	cout<<"Enter your age ";
	cin>>age;
	
	/*if(age>=18){
		cout<<"you are eligible for vote";
	}
	else{
		cout<<"you are not eligble for vote";
	}
	*/
	
	string output=(age>=18)? "Eligible" : "not Eligible";
	cout<<output<<endl;
	return 0;
}
