//DataTypes
#include<iostream>
#include<iomanip>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define DATA_TYPES
//#define INITIALISATION

void main()
{
	setlocale(LC_ALL, "Russian");
	//cout << "Привет!";
	//ОЗУ (RAM)
	//endl - end line ("\n")
	/*cout << true << endl;
	cout << false << endl;
	cout << "\n";
	cout << endl;
	cout << (bool)"" << endl;
	cout << (bool)'\0' << endl;
	cout << '0' << endl;
	bool is_day = false;
	cout << is_day << endl;*/
#if defined DATA_TYPES
	cout << sizeof(int) << endl;
	cout << INT_MIN << "\t" << INT_MAX << endl;

	cout << "\n--------------------------------------------------\n";

	cout << "FLOAT:\n";
	cout << sizeof(float) << endl;
	cout << FLT_MIN << " ... " << FLT_MAX << endl;

	cout << "\n--------------------------------------------------\n";

	cout << "DOUBLE:\n";
	cout << sizeof(double) << endl;
	cout << DBL_MIN << " ... " << DBL_MAX << endl;

	//double a = 1. / 3;
	//cout << setprecision(25) << a << endl;
#endif

#if defined INITIALISATION
	//idenfier - это имя.

	//int _1stPlace;
	double Price = 0;	//Инициализация при объявлении
	cout << Price << endl;
	//Проинициализировать
	//Инициализация - присвоение начального значения.
	int amount;	//Просто объявление переменной
	amount = 3;	//Инициализация после объявления

	double weight;
	cout << "Введите вес товара: ";
	cin >> weight;	//Инициализация вводом с клавиатуры
	cout << "Введенный вес товара: " << weight << endl;
#endif

	int speed = 0;
	const int MAX_SPEED = 250;

	//Числова константа - это просто число в коде
	25;
	-3;
	cout << typeid(25.f).name() << endl;
	cout << typeid(25u).name() << endl;

	cout << sizeof('+') << endl;
	cout << typeid('+').name() << endl;
	cout << sizeof("+") << endl;
	cout << sizeof("Hello") << endl;
}
/*
	1. ABC...Zabc...z0123...9_;
	2.
	3.
	4.
*/