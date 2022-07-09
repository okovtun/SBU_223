#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int n;		//Число, для которого нужно вычислить Факториал
	unsigned long long int f = 1;	//Факториал числа
	cout << "Введите количество итераций: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
}