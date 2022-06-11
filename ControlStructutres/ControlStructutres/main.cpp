#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int t;	//температура воздуха
	cout << "Введите температуру воздуха: "; cin >> t;
	if (t > 0)
	{
		cout << "На улице тепло" << endl;
	}
	else if (t > -10)	//В противном случае (иначе)
	{
		cout << "На улице холодно" << endl;
	}


	if (Condition1)
	{
		....;
		code1;
		....;
	}
	else if (Condition2)
	{
		....;
		code2;
		....;
	}
	.....
	.....
	else if (ConditionN)
	{
		....;
		codeN;
		....;
	}
	else
	{
		....;
		Default code;
		....;
	}
}