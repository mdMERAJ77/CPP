#include<iostream>
#include<vector>
using namespace std;
vector<int> revArr(vector<int>v){
	int s=2, e=v.size()-1;
	while(s<e){
		swap(v[s],v[e]);
		s++;
		e--;
	}
	return v;
}

//function for printing output
void printOut(vector<int> v){
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
int main(){
	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	
	vector<int> ans=revArr(v);
	cout<<"printing reverse array"<<endl;
	printOut(ans);
//using vecotr	
}



//int revArr(int arr[], int size){
//	int s=0, e=size-1;
//	while(s<e){
//		swap(arr[s],arr[e]);
//		s++;
//		e--;
//	}
//}
//
//int main(){
//	
//	int arr[]={1,2,3,4};
//	int size=4;
//	revArr(arr,size);
//	for(int i=0; i<size; i++){
//		cout<<" "<<arr[i];
//	}
//	return 0;
//	
//}
