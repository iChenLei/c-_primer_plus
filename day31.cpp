#include<iostream>
#include<memory>
using namespace std;

int main(){
	//智能指针unique_ptr 优于auto_ptr 
	unique_ptr<int> a(new int(2));
	cout<<*a<<endl;
	return 0;
}
