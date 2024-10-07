#include<iostream>
#include<map>
using namespace std;
int main(){
	map<int,string>m;
	m[1]="meraj";
	m[2]="sakib";
	m[3]="sarik";
	m.insert({4,"hamza"});
	
	for(auto i:m){
		cout<<i.first<<" "<<i.second<<endl;
	}
	cout<<"finding 1  "<<m.count(1)<<endl;
	cout<<"finding -1 "<<m.count(-1)<<endl;
	
	cout<<"after erasing"<<endl;
	m.erase(1);
	for(auto i:m){
		cout<<i.first<<" "<<i.second<<endl;
	}
	
	auto it=m.find(3);
	for(auto i=it; i!=m.end(); i++){
		cout<<(*i).first<<endl;
	}
	
	return 0;
}
