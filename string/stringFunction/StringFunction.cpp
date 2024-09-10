#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char str[]="hello";
	cout<<str<<endl;
	
	cout<<"\ncheck length of string\n";
	int len = strlen(str);
	cout<<len<<endl;
	
	cout<<"\nreverse of string\n";
	strrev(str); //jarem
	cout<<str<<endl;
	
	cout<<"\nconcate string\n";
	char str1[] = "meraj";
	strcat(str,str1);
	cout<<str<<endl;
	
	cout<<"\ncopy string\n";
	char str2[10];
	strcpy(str2,str1);
	cout<<str2;
	
	//try yourself 
	// strlwr()
	// strupr()
	
}
