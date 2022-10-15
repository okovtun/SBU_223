#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	//Reference - это переменная, которая содержит адрес другой переменной.
	int a = 2;
	int& ra = a;
	ra += 3;
	cout << &a << endl;
	cout << &ra << endl;
	int* p_ra;
	/*__asm
	{
		lea eax, dword ptr[ra];
		move dword ptr[p_ra], eax;
	}*/
	//cout << p_ra << endl;
}