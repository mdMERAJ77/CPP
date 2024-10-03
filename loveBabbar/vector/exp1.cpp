#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    
    vector<int>v1(5,1);
    cout<<"original vector: ";
    for(int value:v1){
    	cout<<value<<" ";
	}
	cout<<endl;
	//copy vector
	vector<int>copy(v1);
	cout<<"copy vector: ";
	for(int v1: copy){
		cout<<v1<<" ";
	}cout<<endl;
	
	
	
    cout << "Initial capacity (Empty vector): " << v.capacity() << endl;
    
    v.push_back(1);
    cout << "Capacity after adding 1: " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity after adding 2: " << v.capacity() << endl;
    
    v.push_back(3);
    cout << "Capacity after adding 3: " << v.capacity() << endl;
    
    cout<<"front value is: "<<v.front()<<endl;
    cout<<"back value is: "<<v.back()<<endl;
    
    //check index
    cout<<"what is value at index 2: "<<v.at(2)<<endl;
    
    //check size of vector
    cout<<"size of vector "<<v.size()<<endl;
    
    v.pop_back();
    cout << "Capacity after removing an element (without shrink): " << v.capacity() << endl;
    
    v.shrink_to_fit();
    cout << "Capacity after shrink_to_fit(): " << v.capacity() << endl;
    
    v.pop_back();
    cout << "Capacity after removing another element (without shrink): " << v.capacity() << endl;
    
    v.shrink_to_fit();
    cout << "Capacity after second shrink_to_fit(): " << v.capacity() << endl;

	 //check size of vector
    cout<<"size of vector "<<v.size()<<endl;
    return 0;
}

