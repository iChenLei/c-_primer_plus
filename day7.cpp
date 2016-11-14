#include<iostream>

using namespace std;

double betsy(int);
double pam(int);
void estimate(int lines,double (*pf)(int));

int main(){
	int code;
	cout<<"How many lines of code do you need? ";
	cin>>code;
	cout<<"Here\'s Betay\'s estimate:\n ";
	estimate(code,betsy);
	cout<<"here's Pam's estimate: \n";
	estimate(code,pam);
	return 0;
} 

double betsy(int ins){
	return 0.05*ins;
}

double pam(int ins){
	return 0.03*ins+0.0004*ins*ins;
}

void estimate(int lines,double (*pf)(int)){
	cout<<lines<<" lines will take ";
	cout<<(*pf)(lines) <<"hours\n";
}
