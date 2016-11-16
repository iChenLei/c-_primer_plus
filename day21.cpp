#include<iostream>
using namespace std;

class A{
	private:
		int num = 12;
	public:
		int getNum() const{return num;};
};

class B : public A{
	private:
		int age;
	public:
		void showNum(){	cout<<" num is "<<this->getNum()<<endl;};
};

int main(){
//	A a{2};
	B b;
	b.showNum();
}
