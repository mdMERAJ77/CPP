#include<iostream>
using namespace std;
class jhunna;
class rupesh;
class bipin{
	private:
		int a;
	
	public:
		void show(){
		a=10;
	}
	friend void meraj(bipin p1,jhunna p2, rupesh p3);
};
class jhunna{
	private:
		int b;
	public:
		void show(){
		b=10;
	}
	friend void meraj(bipin p1,jhunna p2, rupesh p3);
};
class rupesh{
	private:
		int c;
	public:
		void show(){
		c=30;
	}
	friend void meraj(bipin p1, jhunna p2,rupesh p3);
};
void meraj(bipin p1, jhunna p2,rupesh p3){
	int money;
	money=p1.a+p2.b+p3.c;
	cout<<money;
}

int main(){
	bipin obj1;
	obj1.show();
	
	jhunna obj2;
	obj2.show();
	
	rupesh obj3;
	obj3.show();
	
	meraj(obj1,obj2,obj3);
}
