#include<iostream>

using namespace std;

class Tv;

class Remote{
	private:
		int type;
	public:
		void change(Tv & t,int n);
};

class Tv{
	private:
		int val;
	public:
		Tv(int n):val(n){};
		friend void Remote::change(Tv &t,int n);
		void show(){cout<<"Now tv's val is "<<val<<endl;};
};

void Remote::change(Tv &t,int n){
	t.val = n;
} 

int main(){
	Tv mytv(2);
	Remote controll;
	mytv.show();
	controll.change(mytv,3);
	mytv.show();
} 
