#include<iostream>

using namespace std;

int main(){
	cout.fill('*');
	const char* staff[2] = {"my name is chenlei","your name?"};
	long bouns[2] = {900,1500};
	
	for(int i=0;i<2;i++){
		cout<<staff[i];
		cout.width(7);
		cout<<bouns[i]<<endl; 
	}
	
	return 0;
} 
