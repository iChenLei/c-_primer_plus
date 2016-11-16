#include<iostream>

using namespace std;

int add(int a,int b);

int main(){
	int a,b,c;
	cin>>a>>b;
	try{
		c = add(a,b);
	}catch(const char *s){
		cout<<s<<endl;
//		continue;
	}
	cout<<"bye\n";
} 

int add(int a,int b){
	int c;
	if(a==b)
		throw "a not allowed to equals to b!";
	c = a+b;
	return c;
}
