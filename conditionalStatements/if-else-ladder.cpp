#include <iostream>
using namespace std;

int main(){
	int a,b,choice;
	
	cout<<"Enter two Numbers: ";
	cin>>a>>b;
	
	cout<<"Enter choice under 1 to 5"<<endl;
	cin>>choice;
	if(choice ==1){
		int add =a+b;
		cout<<add;
	}
	else if(choice == 2){
		int sub =a-b;
		cout<<sub;
	}
	else if(choice == 3){
		int mul =a*b;
		cout<<mul;
	}
	else if(choice==4){
		int div = a/b;
		cout<<div;
	}
	else if(choice == 5){
		int rem = a%b;
		cout<<rem;
	}
	else{
		cout<<"Invalid choice";
	}
}
