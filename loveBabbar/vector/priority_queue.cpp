#include<iostream>
#include<queue>
using namespace std;
int main(){
	priority_queue<int>maxi; // max heap
	
	priority_queue<int, vector<int>,greater<int>>mini; //min heap
	
	maxi.push(2);
	maxi.push(1);
	maxi.push(4);
	maxi.push(0);
	
	int n=maxi.size();
	for(int i=0; i<n; i++){
		cout<<" "<<maxi.top();  //4 2 1 0
		maxi.pop();
	}cout<<endl;
	
	mini.push(3);
	mini.push(1);
	mini.push(5);
	mini.push(2);
	
	int m=mini.size();
	
	for(int i=0; i<m; i++){
		cout<<" "<<mini.top(); //1 2 3 5
		mini.pop();
	}
	
	return 0;
}
