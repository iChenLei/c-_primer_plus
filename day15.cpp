#include<iostream>

using namespace std;
	
enum class egg {small,meidum,large};

int main(){
	egg choice = egg::small;
	cout<<(int)choice<<endl;
	return 0;
}
