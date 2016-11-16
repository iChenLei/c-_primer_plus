#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	int a,b;
	cout<<"Input two number:"<<endl;
	cin>>a>>b;
	if(a==b){
		cout<<"Error...."<<endl;
		abort();  //Òì³£ 
	}else{
		cout<<"Bingoo..."<<endl;
	}
	return 0;
} 
