#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	string filename;  //����һ��string�� 
	
	cout<<"Enter name for file: ";
	cin>>filename;  //��������ļ�ȡ���� 
	
	ofstream fout(filename.c_str()); //����һ��C�ַ��� Ȼ��foutʵ���� 
	
	fout<<"For your eye only!\n";  //ofstream�����������<<��д���ı���Ϣ  file: 1.For your eye only! 
	cout<<"Enter your sercret number: ";
	float sercret;
	cin>>sercret;
	fout<<"Your sercert number is "<<sercret<<endl; //����д����Ϣ  file: 2.Your sercret number is **
	fout.close();  //�رջ����� �رն�дͨ�� 
	
	ifstream fin(filename.c_str());  //ʵ����ifstream�� �����ļ� 
	cout<<"Here are the contents of"<<filename<<":\n";
	char ch;
	while(fin.get(ch))  //һ���ַ�һ���ַ������ļ����� ��'\0'���յ� 
		cout<<ch;  //std::cout�ڿ���̨��ӡ���� 
	cout<<"Done\n"; 
	fin.close(); //�رջ����� �رն�дͨ��  ��important 
	
	return 0;
} 
