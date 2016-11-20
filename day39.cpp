#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<cstdlib>
using namespace std;

inline void eatline(){while(cin.get()!='\n') continue;} //内联函数提高效率 

struct planet{
	char name[20];
	double population;
	double g;
};  //结构体 

const char* file = "planet.dat"; //文件名 

int main(){
	planet pl;
	cout<<fixed<<endl;
	
	ifstream fin;  //读入文件类 
	fin.open(file,ios_base::in|ios_base::binary);  //只读二进制 
	
	if(fin.is_open()){
		cout<<"Here are the current contents of the "<<file<<"file:\n";
		while(fin.read((char*) &pl,sizeof pl)){  //按照结构体格式读取数据 
			cout<<setw(20)<<pl.name<<" : "
			<<setprecision(0)<<setw(12)<<pl.population
			<<setprecision(2)<<setw(6)<<pl.g<<endl;
		}
		fin.close(); //关闭 
	}
	ofstream fout(file,ios_base::out|ios_base::app|ios_base::binary); //可读可写 二进制 
	if(!fout.is_open()){
		cerr<<"Error............\n";
		exit(EXIT_FAILURE);
	}
	
	cout<<"Enter planet name :";
	cin.getline(pl.name,20);
	while(pl.name[0]!='\0'){ //这行代码 让我必须按两下enter键 
		eatline();
		cout<<"Enter planet population: ";
		cin>>pl.population;
		cout<<"Enter planet's gravity: ";
		cin>>pl.g;
		eatline();   
		fout.write((char*)&pl,sizeof pl);  //写入二进制数据 
		cin.get(pl.name,20);
	}
	fout.close();  //关闭 
	
	fin.clear();  //清除 
	fin.open(file,ios_base::in|ios_base::binary);
	if(fin.is_open()){
		cout<<"Here are the contents of the "<<file<<" file:\n";
		while(fin.read((char*)&pl,sizeof pl)){
			cout<<setw(20)<<pl.name<<" : "
			<<setprecision(0)<<setw(12)<<pl.population
			<<setprecision(2)<<setw(6)<<pl.g<<endl;
		}
		fin.close();
	}
	
	cout<<"Over......";
	return 0;
}
