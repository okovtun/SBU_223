//Pointers
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define POINTERS_BASICS

void main()
{
	setlocale(LC_ALL, "");

#ifdef POINTERS_BASICS
	//Pointer
	int a = 2;
	int* pa = &a;
	cout << a << endl;	//вывод значения переменной 'a' на экран
	cout << &a << endl;	//получение адреса переменной 'a' прямо при выводе
	cout << pa << endl;	//выводим адрес переменной 'a', хранящийся в указателе 'pa'
	cout << *pa << endl;//разыменовываем указатель 'pa', и получаем значение, которое хранится по адресу

	int* pb;
	int b = 3;
	//pb - работаем с адресом
	//*pb - работаем со значение по адресу
	pb = &b;
	//int - int
	//int* - указатель на int
	//double - double
	//double* - указатель на double  
#endif // POINTERS_BASICS

	const int n = 5;
	int arr[n] = { 3,5,8,13,21 };
	cout << arr << endl;
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\t";
	}
	cout << endl;
}

/*
-------------------------------------------------------
& - Address-of operator
* - Оператор разыменования (Dereference operator)
-------------------------------------------------------
*/

/*
-------------------------------------------------------
				Pointers arithmetic
+
-
++
--
-------------------------------------------------------
*/