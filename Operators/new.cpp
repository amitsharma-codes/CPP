#include<iostream>
#include<clocale>
using namespace std;
int main()
{
	int *p,size;
	cout<<"Enter the no. of elements:"<<endl;
	cin>>size;
	p = new int[size];
	for(int i=0;i<size;i++)
		cin>>p[i];	
	for(int i=0;i<size;i++)
		cout<<p[i]<<" ";
	cout<<endl;
}

