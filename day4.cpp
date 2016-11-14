#include<iostream> 
//#include<array>
#include<vector> 
using namespace std;

int main(){
   	double p[4] = {1,2,3,4};
   	for(double x : p)
   		cout<<x<<endl;
   	for(double &x:p)
   		x = x*0.8;
   	cout<<"------------"<<endl;
   	for(double x:p)
   		cout<<x<<endl;
   	return 0;
}
