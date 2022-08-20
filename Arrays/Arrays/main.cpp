#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;	//Объявляем количество элементов массива
	int arr[n] = { 3,5,8 };			//Объявляем массив 'arr' на 'n' элементов.
	//arr[2] = 123;	//во 2-й элемент массива 'arr' записываем значение '123'
	//cout << arr[2] << endl;//читаем 2-й элемент массива и выводим ег она экран
	//n-1, SIZE-1
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}