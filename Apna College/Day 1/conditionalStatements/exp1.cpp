#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
 
    if (ch >= 'A' && ch <= 'Z') {				//lower(ch>=97 && ch<=123)
        cout << "Uppercase letter" << endl;
    } 
    else if (ch >= 'a' && ch <= 'z') {			//we can also use UPPERCASE(ch>=65 && ch<=91)
        cout << "Lowercase letter" << endl;
    } 
    else {
        cout << "Invalid input, not an alphabetic character" << endl;
    }

    return 0;
}

