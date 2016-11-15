#include<iostream>
#include<string>
using namespace std;

class father{
	private:
		string name;
		int age;
	public:
		father(string n = "none",int a = 12){ name = n; age = a; };
		void getName(){cout<<"Father\'s name is "<<name<<endl;};
		virtual void getAge(){cout<<"Father\'s age is"<<age<<endl;};
};

class son:public father{
	private:
		int score;
	public:
		son(string n,int a,int s):father(n,a){score = s;};
		void getAge(){cout<<"son\'s age is ..."<<endl;};
		void getScore(){cout<<"son\'s score is "<<score<<endl;};
};

int main(){
	son chen{"chen",12,96};
	father &fa = chen;
	fa.getAge();
	chen.getName();
	chen.getScore();
} 
