#include<iostream>
#include<clocale>
using namespace std;
int a=20;
int main()
{
	int a=30;
	cout<<"local "<<a<<" "<<"global "<<::a<<endl;
	{
		int a=40;
		cout<<"local "<<a<<" "<<"global "<<::a<<endl;
	}
}
