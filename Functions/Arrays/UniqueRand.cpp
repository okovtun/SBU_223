#include"UniqueRand.h"

void UniqueRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool unique;	//����� ���������?
		do
		{
			arr[i] = rand() % (n);
			unique = true;	//������������, ��� ����� ���������,
			//�� ��� ����� ���������:
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