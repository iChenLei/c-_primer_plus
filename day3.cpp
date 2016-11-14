#include<iostream>
#include<string>
using namespace std;

int main(){
  	int higgens = 5;
  	int* p = &higgens;
  	
  	cout<<"*p -->"<<*p<<endl;
  	cout<<"p -->"<<p<<endl;
  	cout<<"higgens -->"<<higgens<<endl;
 	cout<<"&higgens -->"<<&higgens<<endl;
	return 0; 
}
