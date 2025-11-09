#include<iostream>
using namespace std;

int main(){
	char ans,ch;
	cout<<"enter small character: ";
	cin>>ch;
	
	if(ch>='a' && ch<='z'){
		ans=ch-32;
		cout<<"convert capital character: "<<ans;
		return 0;
	}
	else if(ch>='A' && ch<='Z'){
		ans=ch+32;
		cout<<"convert small character: "<<ans;
		return 0;
	}
	else{
		cout<<"not a aplhabet!";
		return 0;
	}
	return 0;
}
