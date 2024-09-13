//what is difference between structure and union
#include<iostream>
using namespace std;

struct student3{
	int roll; //4 bytes
	char name; // 1 byte
	double marks; // 8 bytes
};

union student4{
	int roll;
	char name;
	double marks;

};


int main(){
	//structure
	cout<<"allocate memory of structure= "<<sizeof(student3)<<endl;  //
	
	//union
	cout<<"allocate memory of union= "<<sizeof(student4)<<endl;		//
	
	cout<<sizeof(char)<<endl;
	cout<<sizeof(double);
	return 0;
}
