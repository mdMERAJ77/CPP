#include<iostream>
using namespace std;
int main(){
//	int a=10;
//	int *ptr=&a;
//	cout<<ptr<<endl;
//	ptr++;
////	ptr=ptr+2; 
////	ptr--;
//	cout<<ptr<<endl;

	int ar[]={1,2,3};
	cout<<*(ar)<<endl;
	cout<<*(ar+1)<<endl;
	cout<<*(ar+2)<<endl;

	//subtract ptr
	cout<<"subtract ptr: ";
	int *ptr2;//100
	int *ptr1 =ptr2+2; //ptr2=108
	
	cout<<ptr1-ptr2<<endl;
	
	//compare in pointer
	cout<<"compare in pointer="<<endl;
	int arr[]={4,5,6};
	int *pt1;
	int *pt2=pt1;
	
	cout<<pt1<<endl;
	cout<<pt2<<endl;
	
	
	cout<<"True/False= "<<(pt1 == pt2)<<endl;
	

	return 0;
}
