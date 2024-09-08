#include <iostream>
using namespace std;

int main(){
	int choice;
	cout<<"Enter user choice: ";
	cin>>choice;
	switch(choice){
		case 0: cout<<"sunday"<<endl; break;
		case 1: cout<<"monday"<<endl; break;
		case 2: cout<<"tuesday"<<endl; break;
		case 3: cout<<"wednesday"<<endl; break;
		case 4: cout<<"thrusday"<<endl; break;
		case 5: cout<<"friday"<<endl; break;
		case 6: cout<<"satruday"<<endl; break;
	}
}
