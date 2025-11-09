#include<iostream>
using namespace std;

char smallToCapital(char ch){
	if(ch>='a' && ch<='z'){
		char ans=ch-32;
		return ans;
	}
	else {
        cout << "Invalid input for smallToCaptial()" << endl;
        return ch;
    }
}
//capital to small function
char capitalToSmall(char ch){
	if(ch>='A' && ch<='Z'){
		char ans=ch+32;
		return ans;
	}
	else {
        cout << "Invalid input for capitalToSmall()" << endl;
        return ch;
    }
}

int main(){
	char ch1,ch2;
	cout<<"enter small character: ";
	cin>>ch1;
	cout<<"enter capital character: ";
	cin>>ch2;
	//function call
	cout<<"convert into capital: "<<smallToCapital(ch1)<<endl;
	cout<<"convert into small: "<<capitalToSmall(ch2);
	return 0;
}
