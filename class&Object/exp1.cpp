#include<iostream>
using namespace std;

class studentClass{
	private:
		int roll;
		string name;
		
	public:
		int studentInfo(){
			cout<<"Enter your roll Number "<<endl;
			cin>>roll;
			
			cout<<"Enter your name "<<endl;
			cin>>name;
		}
		
		//method to display roll number and name
		void display(){
			cout<<"your roll number is "<<roll<<endl;
			cout<<"your name is "<<name<<endl;
		}
		
};

int main(){
	studentClass obj;
	obj.studentInfo();
	obj.display();
	
}
