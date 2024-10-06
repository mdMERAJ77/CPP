#include<iostream>
#include<queue>
using namespace std;
int main(){
	queue<string>name;
	
	name.push("meraj");
	name.push("sakib");
	name.push("hamza");
	
	cout<<"first element is: "<<name.front()<<endl;
	
	cout<<"before pop size is: "<<name.size()<<endl;
	
	name.pop(); //meraj has been deleted
	cout<<"\n"<<"when pop then first element is:---\n"<<endl;
	cout<<"first element is: "<<name.front()<<endl; //sakib
	
	
	cout<<"after pop size is: "<<name.size()<<endl;
	return 0;
}
