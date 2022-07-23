#include<iostream>
using namespace std;

//#define TASK1
#define TASK2
//#define TASK3
//#define TASK4
//#define TASK5
//#define TASK6
//#define TASK6_v1

int mnozh(int mno, int mnd, int pr = 0)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		pr = mno * mnd;

		cout << mno << " x " << mnd << " = " << pr << endl;
		mno = mno + 1;
	}
	return 0;
}

void main()
{
#if defined TASK1
	setlocale(LC_ALL, "Russian");
	int n, a;
	cout << "¬ведите целое число, которое нужно возвести в степень: "; cin >> n;
	cout << "¬ведите степень, в которую нужно возвести число: "; cin >> a;
	unsigned long int f = 1;

	for (int i = 0; i < a; i++)
	{
		f *= n;
	}
	cout << f << endl;
	cout << endl;
#endif


#if defined TASK2

	int v = 0, i = 0;
	for (int i = 0; i < 256; i++) {


		char b = i;

		if (v = i % 16) // если a : 16 равно 1, то
		{
			cout << i << "  " << b;
		}
		else  // иначе
		{
			cout << i << "  " << b << endl;
		}

	}
#endif

#if defined TASK3
	setlocale(LC_ALL, "Russian");
	int ch, cho = 0, chd = 1, cht, i;
	cout << "¬ведите целое число: ";
	cin >> ch;
	cout << "–€д чисел ‘ибоначчи до " << ch << " числа: ";
	cout << cho << "  ";
	cout << chd << "  ";

	for (i = 0; i < ch; i++)
	{
		if (i <= 1)
			cht = i;
		else
		{
			cht = cho + chd;
			cout << cht << "  ";
			cho = chd;
			chd = cht;
		}
	}
#endif

	//#if dedfined TASK5






#//endif


#if defined TASK6

	{
		mnozh(1, 1, 0); cout << endl;
		mnozh(1, 2, 0); cout << endl;
		mnozh(1, 3, 0); cout << endl;
		mnozh(1, 4, 0); cout << endl;
		mnozh(1, 5, 0); cout << endl;
		mnozh(1, 6, 0); cout << endl;
		mnozh(1, 7, 0); cout << endl;
		mnozh(1, 8, 0); cout << endl;
		mnozh(1, 9, 0); cout << endl;
	}

#endif

#if defined TASK6_v1
	int k = 1, q = 0;
	for (q = 0; q < 10; q++)
	{
		mnozh(1, k); cout << endl;
		k = k + 1;
	}
#endif
}