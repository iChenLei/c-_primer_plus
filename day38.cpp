#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>

const char* file = "file";

using namespace std;

int main(){
	char ch;
	ifstream fin;
	fin.open(file);
	
	if(fin.is_open()){
		cout<<"Here are contents of file"<<":";
		while(fin.get(ch)){
			cout<<ch;
		}
		fin.close();
	}
	
	ofstream fout(file,ios::out|ios::app);
	if(!fout.is_open()){
		cerr<<"Cant open the file"<<endl;
		exit(EXIT_FAILURE);
	}
	
	cout<<"Append some content..\n";
	string name;
	while(getline(cin,name)&&name.size()>0){
		fout<<name<<endl;
	}
	fout.close();
	return 0;
}
