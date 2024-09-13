#include<iostream>
using namespace std;

union student{
	char name[5];
	int roll;
	int marks;
	
};

int main(){
	student s;
	cout<<"Enter your name: "<<endl;
	cin>>s.name;
	
	cout<<"Enter your roll number "<<endl;
	cin>>s.roll;
	
	cout<<"Enter your marks "<<endl;
	cin>>s.marks;
}
