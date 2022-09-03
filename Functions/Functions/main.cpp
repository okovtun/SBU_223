#include<iostream>
using namespace std;

//Coffee CoffeeMachine(double money);

int Add(int a = 0, int b = 0);	//Прототип функции - Объявление функции (Function declaration)
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello Functions" << endl;
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;

	int c = Add(a, b);	//Использование функции - Вызов функции (Function call)

	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
}

int Add(int a, int b)		//Реализация функции - Определение функции (Function definition)
{
	//Addition - сложение
	int c = a + b;
	return c;
}
int Sub(int a, int b)
{
	//Subtraction - вычитание
	return a - b;
}
int Mul(int a, int b)
{
	//Multiplication - умножение
	return a * b;
}
double Div(int a, int b)
{
	//Division - деление
	return (double)a / b;
}
