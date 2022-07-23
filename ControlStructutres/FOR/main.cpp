#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define PALINDROME
//#define FACTORIAL
//#define POWER
//#define ASCII
//#define FIBONACCI
//#define MULTIPLICATION_TABLE
//#define PYTHAGORAS_TABLE

void main()
{
	setlocale(LC_ALL, "");

#ifdef PALINDROME
	int number;		//число, введенное с клавиатуры
	int reverse = 0;//число, записанное наоборот
	cout << "Введите число: "; cin >> number;
	int buffer = number; //сохраняем копию исходного числа, 
	//чтобы число, введенное пользователем осталось неизменным.
	while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10;
		buffer /= 10;
	}
	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number)
		cout << "Палиндром" << endl;
	else
		cout << "See you later" << endl;
#endif // PALINDROME

#ifdef FACTORIAL
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
#endif // FACTORIAL

#ifdef POWER
	double a;
	double n;
	double N = 1;
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	cout << pow(a, n) << endl;
	/*if (n < 0)
	{
		a = 1 / a;	//основание переносим в знаменатель
		n = -n;		//меняем знак показателя на противоположный
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;*/
#endif // POWER

#ifdef ASCII
	cout << "Таблица ASCII-символов:\n";
	setlocale(LC_ALL, "C");
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
	cout << endl;
	setlocale(LC_ALL, "Rus");
	cout << "Вот и сказочке конец!" << endl;
#endif // ASCII

#ifdef MULTIPLICATION_TABLE
	for (int i = 1; i <= 10; i++)
	{
		cout << "Таблица умножения на " << i << ":\n";
		for (int j = 1; j <= 10; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
		cout << endl;
	}
#endif // MULTIPLICATION_TABLE

#ifdef FIBONACCI
	//	0	1	1	2	3	5	8	13	21	34	....
	int n;
	cout << "Введите предел, до которого нужно вывести ряд Фибоначчи: "; cin >> n;
	//for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
	for (unsigned long long int i = 0, a = 0, b = 1, c = a + b; i++ < n; c = (a = b) + (b = c))
		//cout << a << "\t";
		cout << i << "\t" << a << endl;
	cout << endl;
#endif // FIBONACCI

#ifdef PYTHAGORAS_TABLE
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			/*if (i*j < 100)cout << " ";
			if (i*j < 10)cout << " ";
			cout << i * j << "\t";*/
			cout.width(5);//При задании ширины вывода, 
			//автоматически происходит выравнивание по 
			//правому краю заданной ширины
			//cout << right;
			cout << i * j;
}
		cout << endl;
	}
#endif // PYTHAGORAS_TABLE

	int n;
	cout << "Введите предел, для вывода простых чисел: "; cin >> n;
	for (int i = 1; i < n; i++)
	{
		bool simple = true;	//Предполагаем, что число простое,
		//но это нужно проветрить:
		for (int j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				simple = false;
				break;
			}
		}
		if(simple)cout << i << "\t";
	}
}