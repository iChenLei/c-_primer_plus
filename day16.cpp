#include<iostream>

using namespace std;

class Time{
	private:
		int Hour;
		int Minutes;
	public:
		Time(){Hour = 0; Minutes = 0;};
		Time(int a,int b){Hour = a;Minutes = b;};
		void show(){cout<<"Now time is "<<Hour<<":"<<Minutes<<endl;};
		Time operator+(const Time &ti) const{
			Time sum;
			sum.Minutes = Minutes + ti.Minutes;
			sum.Hour =  Hour + ti.Hour + sum.Minutes/60;
			sum.Minutes %= 60; 
			return sum;
		};
};

int main(){
	Time a = Time(3,46);
	Time b = Time(2,54);
	Time c;
	c = a+b;
	c.show(); 
}
