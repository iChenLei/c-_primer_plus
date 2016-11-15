#include<iostream>

using namespace std;

struct Date{
	int hour;
	int minute;
};

ostream & operator<<(ostream & os,const Date & d){
	os<<d.hour<<" hours, "<<d.minute<<" minutes";
	return os;
}

int main(){
	Date now{11,23};
	cout<<now<<" friend function!!!!"<<endl;
	return 0;
}
