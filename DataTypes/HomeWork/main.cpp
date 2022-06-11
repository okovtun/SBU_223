#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;;

//#define TASK_1
#define TASK_2
#define TASK_3
#define TASK_4

void main()
{
	setlocale(LC_ALL, "");
#ifdef TASK_1
	double money;
	cout << "Введите денежную сумму: "; cin >> money;
	//cout << money << endl;
	money += 1e-8;
	int grn = money;//Неявное преобрпазование типов из float в double
	cout << grn << " грн.\t";
	int cop = (money - grn) * 100;
	cout << cop << " коп.\n";
#endif // TASK_1

	double price_of_notebook, price_of_pencil;
	int amount_of_notebooks, amount_of_pencils;
	cout << "Введите стоимость тетради: "; cin >> price_of_notebook;
	cout << "Введите количество тетрадей: "; cin >> amount_of_notebooks;
	cout << "Введите стоимость карандаша: "; cin >> price_of_pencil;
	cout << "Введите количество карандашей: "; cin >> amount_of_pencils;
	double total_price = price_of_notebook * amount_of_notebooks + price_of_pencil * amount_of_pencils;
	cout << "Общая стоимость покупки: " << total_price << endl;
}