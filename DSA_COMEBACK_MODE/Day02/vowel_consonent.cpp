#include<iostream>
using namespace std;
int main(){
	char c;
	cout<<"enter a character to check it is vowel or consonent? ";
	cin>>c;
	// Convert to lowercase to handle uppercase letters too
    c = tolower(c);
	if(c =='a' || c=='e'|| c=='i' || c=='o' || c=='u'){
		cout<<"vowel";
	}
	else{
		cout<<"consonent";
	}
}
