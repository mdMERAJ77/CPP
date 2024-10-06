#include<iostream>
#include<list>
using namespace std;

int main(){
	list<int> l;
	cout<<"size of list is: "<<l.size()<<endl;
	l.push_back(2);
	l.push_back(1);
	for(int i: l){cout<<" "<<i;
	}
	cout<<endl<<"size of list is: "<<l.size();
	
	l.erase(l.begin());
	cout<<endl<<"after erase then size of list is: "<<l.size()<<endl; //1
	
	l.pop_back();
	cout<<"size of list when pop_back: "<<l.size();  //0

	
	return 0;
}
