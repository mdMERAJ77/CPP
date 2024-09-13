#include<iostream>
using namespace std;

class aklakh{
	private:
		string tv;
	public:		
		void show(){
			tv="hatim tai...";
		}	
	friend void meraj(aklakh r);
};
void meraj(aklakh r){
	cout<<"meraj watching "<<r.tv;
}

int main(){
	aklakh obj;
	obj.show();
	meraj(obj);
}


