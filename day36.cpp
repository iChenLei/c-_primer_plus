#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	string filename;  //声明一个string类 
	
	cout<<"Enter name for file: ";
	cin>>filename;  //给输出的文件取名字 
	
	ofstream fout(filename.c_str()); //返回一个C字符串 然后fout实例化 
	
	fout<<"For your eye only!\n";  //ofstream类重载运算符<<来写入文本信息  file: 1.For your eye only! 
	cout<<"Enter your sercret number: ";
	float sercret;
	cin>>sercret;
	fout<<"Your sercert number is "<<sercret<<endl; //继续写入信息  file: 2.Your sercret number is **
	fout.close();  //关闭缓冲区 关闭读写通道 
	
	ifstream fin(filename.c_str());  //实例化ifstream类 并打开文件 
	cout<<"Here are the contents of"<<filename<<":\n";
	char ch;
	while(fin.get(ch))  //一个字符一个字符读出文件内容 以'\0'问终点 
		cout<<ch;  //std::cout在控制台打印内容 
	cout<<"Done\n"; 
	fin.close(); //关闭缓冲区 关闭读写通道  ！important 
	
	return 0;
} 
