#include<iostream>
#include<ctime>

using namespace std;

void show(int* a){cout<<"(via *) a is "<<*a<<endl;};
void show(int &a){cout<<"(via &) a is "<<a<<endl;};

int main(){
	int a = 10;
	show(a);
	show(&a);
	return 0;
}

