#include<iostream>
using namespace std;

class A{
	private:
		int a,b;
	public:
		void show(){
			a=10;
			b=20;
		}
		friend void meraj(A p1, merajbhai p2);
		friend class B;
};
class merajbhai{
		public:
			int meraj(A r1){
			int d=r1.a+r1.b;
			cout<<d;
		}
}
};
class B{
	public:
		void add(A r){
			int c=r.a+r.b;
			cout<<c;
		}
};

int main(){
	A obj;
	obj.show();
	
	B obj1;
	obj1.add(obj);
	
	merajbhai obj2;
	obj2.meraj(obj)
	return 0;
}
