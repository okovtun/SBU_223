#include<iostream>
#include<conio.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define Escape 27

//#define IF_BASICS
//#define CALC_IF
//#define CALC_SWITCH
//#define WHILE_1
//#define WHILE_2

void main()
{
	setlocale(LC_ALL, "");

#ifdef IF_BASICS
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


	/*if (Condition1)
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
	}*/
#endif // IF_BASICS

#ifdef CALC_IF
	double a, b;//Числа, вводимые ползователем
	char s;		//Sign - знак операции
	cout << "Введите арифметическое выражение: ";
	cin >> a >> s >> b;
	//cout << a << s << b << endl;
	if (s == '+')		cout << a << " + " << b << " = " << a + b << endl;
	else if (s == '-')	cout << a << " - " << b << " = " << a - b << endl;
	else if (s == '*')	cout << a << " * " << b << " = " << a * b << endl;
	else if (s == '/')	cout << a << " / " << b << " = " << a / b << endl;
	else				cout << "Error: No operation" << endl;
	cout << "Для выхода нажмите Esc, для продолжения нажмите любую клавишу" << endl;
	if (_getch() != 27)	main();
#endif // CALC_1

#ifdef CALC_SWITCH
	double a, b;
	char s;
	cout << "Введите арифметическое выражение: ";
	cin >> a >> s >> b;
	switch (s)
	{
	case '+': cout << a << " + " << b << " = " << a + b << endl; break;
	case '-': cout << a << " - " << b << " = " << a - b << endl; break;
	case '*': cout << a << " * " << b << " = " << a * b << endl; break;
	case '/': cout << a << " / " << b << " = " << a / b << endl; break;
	default:  cout << "Error: No operation" << endl;
	}
	main();
#endif // CALC_SWITCH

#ifdef WHILE_1
	int i = 0;	//Счетчик цикла
	int n;		//Количество итераций
	cout << "Введите количество итераций: "; cin >> n;
	while (++i < n)	//Заголовок цикла
	{	//Тело цикла:
		cout << i << " Hello World\n";
		//i++;
	}
#endif // WHILE_1

#ifdef WHILE_2
	short n;	//Количество итераций
	cout << "Введите количество итераций: "; cin >> n;
	while (n)
	{
		cout << n-- << "\t";
	}
	cout << endl;
#endif // DEBUG

	char key=43;	//Эта переменная будет хранить код клавиши.
	do
	{
		key = _getch();	//Функция _getch() ожидает нажатие клавиши
		//и возвращает ASCII-код нажатой клавиши.
		//Функция _getch() объявлена в библиотеке conio.h
		cout << (int)key << "\t" << key << endl;
		//(int)key - явное преобразование переменной key в тип данных int,
		//для того чтобы увидеть ASCII-код нажатой клавиши
	} while (key != Escape);
}