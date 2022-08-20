#include <iostream>
using namespace std;
# define KVADRAT
//# define CHESS

void main()
{
	setlocale(LC_ALL, "Rus");
#if defined KVADRAT
	for (int i = 1; i < 5; i++)
	{
		for (int j = 1; j < 5; j++)
		{
			if (j % 2 == 0)
			{
				cout << "-";
			}
			else
			{
				cout << "+";
			}
		}
		cout << endl;
	}
#endif

#if defined CHESS 
		for (int n = 0; n < 4; n++)
		{
			for (int i = 0; i < 4; i++)
			{
				for (int k = 0; k < 32; k = k + 4)
				{
					if (/*k == 0 || k == 8 || k == 16 || k == 24*/k % 8 == 0)
					{
						for (int j = 0; j < 4; j++)
						{
							cout << "* ";
						}

					}

					else
					{
						for (int i = 0; i < 4; i++)
						{
							cout << "  ";
						}
					}
				}
				cout << endl;
			}
			for (int i = 0; i < 4; i++)
			{
				for (int k = 0; k < 32; k = k + 4)
				{
					if (k == 0 || k == 8 || k == 16 || k == 24)
					{
						for (int j = 0; j < 4; j++)
						{
							cout << "  ";
						}

					}
					else
					{
						for (int i = 0; i < 4; i++)
						{
							cout << "* ";
						}

					}
				}
				cout << endl;
			}
		}


#endif
}