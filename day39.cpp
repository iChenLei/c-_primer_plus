#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<cstdlib>
using namespace std;

inline void eatline(){while(cin.get()!='\n') continue;} //�����������Ч�� 

struct planet{
	char name[20];
	double population;
	double g;
};  //�ṹ�� 

const char* file = "planet.dat"; //�ļ��� 

int main(){
	planet pl;
	cout<<fixed<<endl;
	
	ifstream fin;  //�����ļ��� 
	fin.open(file,ios_base::in|ios_base::binary);  //ֻ�������� 
	
	if(fin.is_open()){
		cout<<"Here are the current contents of the "<<file<<"file:\n";
		while(fin.read((char*) &pl,sizeof pl)){  //���սṹ���ʽ��ȡ���� 
			cout<<setw(20)<<pl.name<<" : "
			<<setprecision(0)<<setw(12)<<pl.population
			<<setprecision(2)<<setw(6)<<pl.g<<endl;
		}
		fin.close(); //�ر� 
	}
	ofstream fout(file,ios_base::out|ios_base::app|ios_base::binary); //�ɶ���д ������ 
	if(!fout.is_open()){
		cerr<<"Error............\n";
		exit(EXIT_FAILURE);
	}
	
	cout<<"Enter planet name :";
	cin.getline(pl.name,20);
	while(pl.name[0]!='\0'){ //���д��� ���ұ��밴����enter�� 
		eatline();
		cout<<"Enter planet population: ";
		cin>>pl.population;
		cout<<"Enter planet's gravity: ";
		cin>>pl.g;
		eatline();   
		fout.write((char*)&pl,sizeof pl);  //д����������� 
		cin.get(pl.name,20);
	}
	fout.close();  //�ر� 
	
	fin.clear();  //��� 
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
