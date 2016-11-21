#include<iostream>
#include<string>

using namespace std;

template<typename T>
void show_son(const T& val){
	cout<<val<<endl;
}

template<typename...Args>
void show(Args...args){
	show_son(args...);
}

int main(){
	int x = 1;
	double y = 2.3;
	show(x,y);
	return 0;
}
