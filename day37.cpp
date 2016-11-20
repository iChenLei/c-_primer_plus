#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ifstream fin;
	fin.open("file");
	if(fin.is_open()){
		cout<<"Open successful........";
//		fin<<"open successful...";
	}
	fin.close();
	return 0;
} 
