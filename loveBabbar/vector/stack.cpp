#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<string>name;
name.push("meraj");
name.push("seraj");
name.push("sakib");

cout<<"LIFO--> Last in First Out: "<<name.top()<<endl; //sakib

name.pop();
cout<<"LIFO--> Last in First Out: "<<name.top()<<endl; //seraj

name.pop();
cout<<"LIFO--> Last in First Out: "<<name.top()<<endl; //meraj

//name.pop();
cout<<name.size()<<endl;  
cout<<name.empty(); //1=true, 0=false
return 0;
}
