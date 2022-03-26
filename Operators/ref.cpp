#include<iostream>
//#include<clocale>
using namespace std;
int& add(int& x,int& y);
int main()
{
	int a=20,b=10;
	int &c=add(a,b);
	cout<<c<<endl;
	cout<<&a<<endl;
	cout<<&b<<endl;
	cout<<&c<<endl;
}
int& add(int& x,int& y)
{
	static int z;
	z=x+y;
	cout<<&x<<endl;
	cout<<&y<<endl;
	cout<<&z<<endl;
	return z;
}
