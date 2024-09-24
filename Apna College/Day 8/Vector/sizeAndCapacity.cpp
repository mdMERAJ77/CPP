#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;

    // Initial state
    cout << vec.size() << " ";       // Output: 0
    cout << vec.capacity() << endl;   // Output: 0

    // Adding first element
    vec.push_back(1);
    cout << vec.size() << " ";       // Output: 1
    cout << vec.capacity() << endl;   // Output: 1

    // Adding second element
    vec.push_back(2);
    cout << vec.size() << " ";       // Output: 2
    cout << vec.capacity() << endl;   // Output: 2

    // Adding third element
    vec.push_back(3);    
    cout << vec.size() << " ";       // Output: 3
    cout << vec.capacity() << endl;   // Output: 4 (capacity increases to next power of 2)

    // Adding fourth element
    vec.push_back(4);    
    cout << vec.size() << " ";       // Output: 4
    cout << vec.capacity() << endl;   // Output: 4 (capacity doesn't increase immediately)

    // Adding fifth element
    vec.push_back(5);    
    cout << vec.size() << " ";       // Output: 5
    cout << vec.capacity() << endl;   // Output: 8 (capacity increases to accommodate new elements)

    return 0;
}

