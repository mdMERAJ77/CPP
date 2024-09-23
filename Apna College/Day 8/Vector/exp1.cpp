#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec; // First way to declare a vector (Empty vector, no values initialized)
    vector<int> vec1 = {1, 2, 3}; // Second way to declare and initialize with C++11 or later
    vector<int> vect2(3, 0); // Third way: vector of size 3, all values initialized to 0

    // Printing vec1 using range-based for loop (C++11 and later)
    for(int val: vec1){ // Iterating over vec1 using for-each loop
        cout << val << " "; // Prints 1 2 3
    }
    cout << endl;

    // Printing vect2 using range-based for loop
    for(int val2: vect2){ // Iterating over vect2 using for-each loop
        cout << val2 << " "; // Prints 0 0 0
    }
    
    cout << endl;

    return 0;
}

