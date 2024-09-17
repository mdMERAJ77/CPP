#include<iostream>
using namespace std;

int main() {
    int n = 4;
    
    // Top part
    for(int i = 0; i < n; i++) {
        // Print leading spaces
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Print first star
        cout << "*";
        
        // Print spaces between stars for rows other than the first
        if(i != 0) {
            for(int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            // Print second star
            cout << "*";
        }
        
        cout << endl;
    }
    
    // Bottom part
    for(int i = 0; i < n - 1; i++) {
        // Print leading spaces
        for(int j = 0; j < i + 1; j++) {
            cout << " ";
        }
        // Print first star
        cout << "*";
        
        // Print spaces between stars
        if(i != n - 2) {
            for(int j = 0; j < 2 * (n - i) - 5; j++) {
                cout << " ";
            }
            // Print second star
            cout << "*";
        }
        
        cout << endl;
    }
    
    return 0;
}

