#include<iostream>
using namespace std;

int main(){
    int i =1,num;
    cout <<"Enter a number: ";
    cin>>num;

    if(num<1){
        cout <<"Only positive numbers allowed";
        return 0;
    }

    while(i*i<=num){ //safe for overflow: (i<=num/i)
        i++;
    }

    cout <<"Approximate integer square root:"<<(i - 1);
    return 0;
}

