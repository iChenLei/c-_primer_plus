#include<iostream>
#include<vector>
using namespace std;

struct person{
	int age;
	double height;
};

int main(){
	vector<person> d_number(3);
	d_number[0].age = 2;
//	cout<<*d_number.begin()<<endl;
//	cout<<d_number[0]<<endl;
	return 0;
}
