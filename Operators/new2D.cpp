#include<iostream>
#include<clocale>
#include<unistd.h>
using namespace std;
int main()
{
	int **p,rows,cols;
	cout<<"Enter the no. of rows:"<<endl;
	cin>>rows;
	cout<<"Enter the no. of cols:"<<endl;
	cin>>cols;
	p = new int*[rows];
	srand(getpid());
	for(int i=0;i<rows;i++)
	{
		p[i] = new int[cols];
		for(int j=0;j<cols;j++)
			p[i][j]=rand()%101;
	}
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
			cout<<p[i][j]<<" ";
	cout<<endl;
	}
	for(int i=0;i<rows;i++)
	{
		delete []p[i];
	}
	delete []p;
}
