#include<iostream>
#include<clocale>
using namespace std;
int main()
{
	setlocale(LC_CTYPE,"");
	wchar_t ch;
	for(ch=9728;ch<9841;ch++)
		wcout<<ch<<" ";
	wcout<<"\n";
	wcout<<" ";
	wcout<<(wchar_t)2309<<(wchar_t)2367<<(wchar_t)2350<<(wchar_t)2340<<endl;
}
