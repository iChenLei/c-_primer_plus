#include<iostream>
#include<valarray>

using namespace std;

int main(){
	valarray<int> v1(2,3);
	valarray<int> v5 = {1,2,3,4,5};
	
	cout<<"V1---->"<<v1[0]<<endl;
	cout<<"V5---->"<<v5.max()<<endl;
}
