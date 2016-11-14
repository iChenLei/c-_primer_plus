#include<iostream>
#include<string>
using namespace std;

struct student{
	int age;
	int score;
	string name;
};

void show(student &a);

int main(){
	student chen{21,98,"chenlei"};
	show(chen);
//	cout<<chen.name<<endl;
	return 0;
}

void show(student &a){
	cout<<"Show student's information:"<<endl;
	cout<<"age----->"<<a.age<<endl;
	cout<<"name---->"<<a.name<<endl;
//	delete a.score;
	cout<<a.score<<endl;
}


