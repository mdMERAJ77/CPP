// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
    // Write C++ code here
   vector<int> vec; //Empty vector 
       // Print the size of the vector
    cout << "Size of vector: " << vec.size() << endl;

	vector<int>vec1={1,2,3,4};
	cout<<"size of vector: "<<vec1.size() <<endl;
	
	
	vec1.push_back(10);
	vec1.push_back(9);
	vec1.pop_back();
	vec1.pop_back();
	
	
	for(int val: vec1){ //for each loop
		cout<<val<<" ";
	}
	
	cout<<endl<<"front value is "<<vec1.front();
	cout<<endl<<"back value is "<<vec1.back();
	cout<<endl<<"at "<<vec1.at(2);
	
    return 0;
}
