#include<iostream>
using namespace std;
int main(){
	//Logical Operator : GIVES ONLY  0 or 1 (false or true)
	//1: AND -->  && if both condition true then true(1) otherwise false(0)
	//2: OR  -->  || atleast one condition true then return true(1) otherwise false(0)
	//3: NOT -->  !  if condition true return false or false return ture
	
//	cout<<"enter a number a: ";
//	int a;
//	cin>>a;
//	cout<<"enter a number b: ";
//	int b;
//	cin>>b;
//	cout<<"enter a number c: ";
//	int c;
//	cin>>c;
//	
//	if(a>b && a>c){
//		cout<<"answer is: "<<"true";
//		return 0;
//	}
//	else{
//		cout<<"answer is: "<<"false";
//		return 0;
//	}
	
	
    // check vowel or consonant
    cout << "Enter a character to check if it's vowel or consonant: ";
    char a1;
    cin >> a1;
    
    a1 = tolower(a1);
    
    if(a1 == 'a' || a1 == 'e' || a1 == 'i' || a1 == 'o' || a1 == 'u') {
        cout << "It is a vowel";
    }
    else {
        cout << "It is a consonant";
    }
    
	return 0;
}
