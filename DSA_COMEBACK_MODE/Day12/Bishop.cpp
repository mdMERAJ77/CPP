#include<iostream>
using namespace std;

int movesbishop(int row, int col){
	int count=0;
	count=count+min(8-row, 8-col);
	count=count+min(row-1, 8-col);
	count=count+min(8-row, col-1);
	count=count+min(row-1, col-1);
	
	return count;
}
int main(){
	int a,b;
	cout<<"enter 2 positive integer: ";
	cin>>a>>b;
	cout<<movesbishop(a,b);
	return 0;
}
