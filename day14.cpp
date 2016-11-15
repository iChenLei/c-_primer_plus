#include<iostream>
#define STKS 4
using namespace std;

class Stock{
	private:
		double value;
	public:
		Stock(){value = 0;};
		Stock(double val){value = val;};
		const Stock & topbal(const Stock & s) const{
			 //最后一个const用于禁止在函数体中进行赋值之类的变量改变行为
			// s.value = 0  Error这种行为不被允许 
			if(s.value > value){
				return s;
			}else{
				return *this;
			}
		};
		void getValue(){
			cout<<"value is "<<this->value<<endl;	
		};
};

int main(){
	Stock s[STKS] = {Stock(12.0),Stock(1.3)};
	s[0].getValue();
	Stock a = s[0].topbal(s[1]);
	a.getValue();
	s[2].getValue();
} 
