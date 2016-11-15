#include<iostream>

using namespace std;

struct job{
	char name[20];
	double salary;
};
template <typename T> void Swap(T &a,T &b);
template <> void Swap<job> (job &j1,job &j2);

int main(){
	job sue = {"sue",120};
	job sindey = {"chh",908};
	cout<<sue.salary<<"...."<<sindey.salary<<endl;
	Swap(sue,sindey);
	cout<<sue.salary<<"...."<<sindey.salary<<endl;
	return 0;
}

template <> void Swap<job>(job &j1,job &j2){
	double t1;
	t1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = t1;
}
