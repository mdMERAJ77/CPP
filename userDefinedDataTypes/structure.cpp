#include<iostream>
using namespace std;

struct studentInfo {   
    char name[20];
    int rollNo;
    float marks;
};

int main() {
    struct studentInfo s;  // No need to use 'struct' in C++
    
    cout << "Enter student name: ";
    cin >> s.name;
    
    cout << "Enter student roll number: ";
    cin >> s.rollNo;
    
    cout << "Enter student marks: ";
    cin >> s.marks;
    
    cout << "\nStudent Info:\n";
    cout << "Roll Number: " << s.rollNo << "\n";
    cout << "Name: " << s.name << "\n";
    cout << "Marks: " << s.marks << "\n";
    
    return 0;
}

