#include<iostream> 
using namespace std;

#define offset "\t\t\t\t\t"	//offset - смещение
#define endline "\n"

//define - определить. Создает макроопределение (макрос).
//У всех макросов есть имя
//value - значение
#define NAME value
#define что_заменить чем_заменить

//#define ELOCHKA	//ОПРЕДЕЛЕИТЬ ELOCHKA

void main()
{
	setlocale(LC_ALL, "Russian");
#if defined ELOCHKA
	//если определено ELOCHKA, то нижеследующий код будет виден компилятору.
	cout << offset << "В лесу родилась елочка,\n";
	cout << offset << "В лесу она росла,\n";
	cout << offset << "Зимой и летом стройная,\n";
	cout << offset << "Зеленая была.\n";
	cout << endline;
#endif
	cout << offset << "Метель ей пела песенку:\n";
	cout << offset << "\"Спи, елочка, бай-бай!\"\n";
	cout << offset << "Мороз снежком укутывал:\n";
	cout << offset << "\"Смотри, не замерзай!\"\n";
	cout << endline;
#if defined ELOCHKA
	cout << offset << "Трусишка зайка серенький\n";
	cout << offset << "Под елочкой скакал.\n";
	cout << offset << "Порою волк, сердитый волк,\n";
	cout << offset << "Рысцою пробегал.\n";
	cout << "\n";
#endif
	cout << offset << "Чу! Снег по лесу частому\n";
	cout << offset << "Под полозом скрипит\;\n";
	cout << offset << "Лошадка мохноногая\n";
	cout << offset << "Торопится,бежит.\n";
	cout << "\n";
	cout << offset << "Везет лошадка дровенки,\n";
	cout << offset << "А в дровнях мужичок,\n";
	cout << offset << "Срубил он нашу елочку\n";
	cout << offset << "Под самый корешок.\n";
	cout << "\n";
#if defined ELOCHKA
	cout << offset << "И вот она, нарядная,\n";
	cout << offset << "На праздник к нам пришла,\n";
	cout << offset << "И много, много радости\n";
	cout << offset << "Детишкам принесла.\n";
#endif
}