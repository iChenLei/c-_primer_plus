#include<iostream>
#include<valarray>
#include<string>
using namespace std;

// :virtual  虚基类解决二义性问题 

template <class T>
	class num{
		private:
			T _t;
		public:
			num(T t){_t = t;};
			void show(){cout<<"template num class\'val "<<_t<<endl;}; 
	};

int main(){
	int s = 12;
	string M = "hello world";
	num<int> a(s);
	num<string> b(M);
	a.show();
	b.show();
}
 
