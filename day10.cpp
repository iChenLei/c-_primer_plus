#include<iostream>
using namespace std;

template <typename T>
void Swap(T &a,T &b);

int main(){
	int i = 10,j =20;
	cout<<"i,j = "<<i<<","<<j<<endl;
	Swap(i,j);
	cout<<"Now i,j = "<<i<<","<<j<<endl; 
	return 0;
}

template <typename T>
void Swap(T &a,T &b){
	T temp;
	temp = a;
	a = b;
	b= temp;WS
}
