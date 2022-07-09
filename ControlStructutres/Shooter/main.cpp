#include<iostream>
#include<conio.h>
using namespace std;

#define Enter	13
#define Escape	27

#define UP_ARROW	72
#define DOWN_ARROW	80
#define LEFT_ARROW	75
#define RIGHT_ARROW	77

enum Key
{
	Ent = 13,
	Esc = 27,
	UpArrow = 72,
	DownArrow = 80,
	LeftArrow = 75,
	RightArrow = 77
};

//#define SHOOTER_IF
#define SHOOTER_SWITCH

void main()
{
	setlocale(LC_ALL, "");
#ifdef SHOOTER_IF
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		if (key == 'w' || key == 'W' || key == UP_ARROW)cout << "Вперед" << endl;
		else if (key == 's' || key == 'S' || key == DOWN_ARROW)cout << "Назад" << endl;
		else if (key == 'a' || key == 'A' || key == LEFT_ARROW) cout << "Влево" << endl;
		else if (key == 'd' || key == 'D' || key == RIGHT_ARROW)cout << "Вправо" << endl;
		else if (key == ' ')cout << "Прыг скок" << endl;
		else if (key == Enter)cout << "Огонь" << endl;
		else if (key == 'r' || key == 'R')cout << "Перезарядка" << endl;
		else if (key != Escape && key != -32)cout << "Error" << endl;
	} while (key != Escape);
#endif // SHOOTER_IF

#ifdef SHOOTER_SWITCH
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		switch (key)
		{
		case 'w':case 'W':case Key::UpArrow: cout << "Вперед" << endl; break;
		case 's':case 'S':case Key::DownArrow: cout << "Назад" << endl; break;
		case 'a':case 'A':case Key::LeftArrow: cout << "Влево" << endl; break;
		case 'd':case 'D':case Key::RightArrow: cout << "Вправо" << endl; break;
		case 'r':case 'R': cout << "Перезарядка" << endl; break;
		case ' ': cout << "Прыжок" << endl; break;
		case Enter: cout << "Огонь" << endl; break;
		case Escape:cout << "Выход" << endl;
		case -32:break;
		default: cout << "Error" << endl;
		}
	} while (key != Escape);
#endif // SHOOTER_SWITCH

}