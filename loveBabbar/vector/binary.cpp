#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	vector<int>v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(5);
	v.push_back(7);
	cout<<binary_search(v.begin(),v.end(),3)<<endl;
	int a=3;
	int b=5;
	cout<<"max "<<max(a,b);
	cout<<", min "<<min(a,b)<<endl;
	swap(a,b);
	cout<<"a: "<<a<<endl;
	
	string abcd ="abcd";
	reverse(abcd.begin(),abcd.end());
	cout<<"string rev: "<<abcd<<endl;
	
	rotate(v.begin(),v.begin()+1,v.end());
	cout<<"after rotate: "<<endl;
	for(int i:v){
		cout<<i<<" ";
	}
	sort(v.begin(), v.begin()+1, v.end());
	
	return 0;
}
