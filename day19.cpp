#include<iostream>

using namespace std;

class foo{
	private:
		int age = 12;
	public:
		static const int num =12;
		foo(int a){ age = a;};
		void show(){cout<<"sum ->"<<num<<endl;};
//		void plus(){ num++;};
};

int main(){
//	int foo::num = 12;
	foo a{1};
	foo b{2};
//	a.num++;
	cout<<b.num<<endl;
	return 0;
}
