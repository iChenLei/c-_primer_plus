#include<iostream>
using std::cout;
using std::endl;
namespace foo{
	int i = 10;
	void put(){
		cout<<"put something..."<<endl;
	}
} 

int main(){
	cout<<foo::i<<endl;
	foo::put();
	return 0;
}
