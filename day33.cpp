#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> a(3);
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	vector<int>::iterator pr;
	for(pr = a.begin();pr!=a.end();pr++){
		cout<<*pr<<endl;
		cout<<"-----------------"<<endl; 
	}
	return 0;
}
