#include<iostream>

using namespace std;

template <typename T>
class ManyFriend
{
	private:
		T item;
	public:
		ManyFriend(const T & i):item(i){};
		template <typename C,typename D> friend void show(C &,D &);
};

template<typename C,typename D> void show(C &c,D &d){
	cout<<c.item<<" , "<<d.item<<endl;
}

int main(){
	ManyFriend<int> h(10);
	ManyFriend<int> b(20);
	ManyFriend<double> k(10.5);
	cout<<"h() and b() :";
	show(h,b);
	cout<<"h() and k() :";
	show(h,k);
	return 0;
}
 
