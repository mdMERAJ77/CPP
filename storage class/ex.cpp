#include<iostream>
using namespace std;

int a; //extern(glabal)
int main(){
//what is storage class:- storage class defines
// the scope and lifetime of variable and funtions.
// we have four storage class:-
//1:auto(local) 2:static 3:register 4:extern(global)

//auto int b; //auto(local)
int b; //auto(local variable)

static int c; //static

register int d; //register

cout<<"global="<<a<<endl;
cout<<"auto(local)="<<b<<endl;
cout<<"static="<<c<<endl;
cout<<"register="<<d<<endl;

return 0;
}
