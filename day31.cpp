#include<iostream>
#include<memory>
using namespace std;

int main(){
	//����ָ��unique_ptr ����auto_ptr 
	unique_ptr<int> a(new int(2));
	cout<<*a<<endl;
	return 0;
}
