#include<iostream>
using namespace std;
 

struct student{
char name[20];
int roll;
float marks;
};

int main(){
	student s;
	
	cout<<"Enter your name"<<endl;
	cin>>s.name;
	
	cout<<"Enter your roll number"<<endl;
	cin>>s.roll;
	
	cout<<"Enter your marks"<<endl;
	cin>>s.marks;
	
	
	cout<<"\nStudent info: \n";
	cout<<"your name is= "<<s.name<<endl;
	cout<<"your roll number is= "<<s.roll<<endl;
	cout<<"your marks is= "<<s.marks<<endl;
	
}
