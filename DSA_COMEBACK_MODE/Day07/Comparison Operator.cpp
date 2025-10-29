#include<iostream>
using namespace std;
int main(){
	//comparison operator: only give 1 or 0 (true or false)
	//precedence:  > < >= <=  
	//precedence:  ==  !=
	
	//if precedence same then we will use Associtivity rule: solve LEFT TO RIGHT
	
	//example:
	cout<<"Comparision with Associativity Example: "<<endl;
	cout<<(5>4<3==2)<<endl; //5>4<3==2  1<3==2  1==2 final answer is: 0
	cout<<(3>4>5!=1)<<endl; //3>4>5!=1  0>5!=1  0!=1 final answer is: 1
	
	cout<<"Comparision Example: "<<endl;
	cout<<(2>2)<<endl;  //0
	cout<<(2<2)<<endl;  //0
	cout<<(2>3)<<endl;  //0
	cout<<(2<3)<<endl;  //1
	cout<<(2>=2)<<endl; //1
	cout<<(2<=2)<<endl; //1
	cout<<(2>=3)<<endl; //0
	cout<<(2<=3)<<endl; //1
	cout<<(2==2)<<endl; //1
	cout<<(2!=2)<<endl; //0
	cout<<(2!=3)<<endl; //1
	
	return 0;
}
