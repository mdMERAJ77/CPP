#include <iostream>
using namespace std;
static int d = 40; // global static variable
int b = 20; // global variable

int main(){
    int a = 10; // local variable
    static int c = 30; // local static variable

    cout << a << " " << b << " " << c << " " << d;
    
    return 0;
}

