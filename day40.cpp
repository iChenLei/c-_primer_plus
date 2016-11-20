#include<iostream>
#include<string>
#include<cstdio>
using namespace std; 

int main(){
	cout<<"This system can generate up to "<<TMP_MAX
	<<" tempoary names of up to "<<L_tmpnam
	<<" characters.\n";
	
	char pszName[L_tmpnam] = {'\0'};
	for(int i =0;i<10;i++){
		tmpnam(pszName);
		cout<<pszName<<endl;
	}
	return 0;
}
