#include<iostream>
#include<string>
using namespace std;

class Student{
	private:
		string name = "chenlei";
		int age = 21;
		double height = 12.33;
	public:
		Student(){
		   cout<<"constructor be called.."<<endl;	
		};
		void getName(){
		 cout<<"My name is"<<name<<endl;	
		};
		void getAge(){
			cout<<"My age is"<<age<<endl; 
		};
		~Student(){
			cout<<"destory student class..."<<endl;
		};
		
};

int main(){
	Student chen;
	chen.getAge();
	chen.getName();
	return 0;
}
