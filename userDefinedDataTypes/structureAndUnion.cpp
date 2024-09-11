#include<iostream>
using namespace std;

//for structure
//in structure all variable size add then give sizeof memory
struct student{
	int makrks;
	float avg;
	double fees;
};

//for union
//in union biggest size of variable consider as sizeof memory
union student2{
	int marks; //int 4 bytes
	float avg; //float 4 bytes
	double fees; //double 8bytes
};

int main(){
	struct student s;
	union student2 s2;
	
	cout<<"structure size= "<<sizeof(s)<<endl; //4+4+8=16bytes
	cout<<"union size= "<<sizeof(s2)<<endl;// biggest size is 8bytes = 8bytes
	
	return 0;
}
