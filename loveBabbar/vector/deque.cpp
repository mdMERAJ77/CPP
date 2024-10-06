#include<iostream>
#include<deque>
using namespace std;
int main(){
	deque<int>d;
	cout<<d.empty()<<endl; //1= true, 0= false
	d.push_front(1);
	d.push_back(2);
	d.push_back(5);
	
	d.pop_back(); //5 deleted
	d.push_back(3); //3 added
	//how to print
	for(int i: d){   //simple way to print
		cout<<i<<" ";
		
	}

//    int size = d.size();
//	for(int i=0; i<size; i++){
//		cout<<d[i]<<" ";
//	}

//	for(int i=0; i<d.size(); i++){
//		cout<<d[i]<<" ";
//	}

		//HOW TO find index value
		cout<<endl<<"index of zero value is: "<<d.at(0)<<endl;
		
		//empty
		cout<<"empty or not: "<<d.empty()<<endl;
	
	//erase function
	
	//erase before size
	cout<<"erase before size: "<<d.size()<<endl;
	d.erase(d.begin(), d.begin()+1); // 1 has been deleted
	
	
	//erase after size
	cout<<"erase after size: "<<d.size()<<endl;
	
	
	for(int i=0; i<d.size(); i++){
		cout<<" "<<d[i];  //output 2 3
	}
	
	
	
	return 0;
}
