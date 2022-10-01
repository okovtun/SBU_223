#include"UniqueRand.h"

void UniqueRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool unique;	//Число уникально?
		do
		{
			arr[i] = rand() % (n);
			unique = true;	//предполагаем, что число уникально,
			//но это нужно проверить:
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
	}
}