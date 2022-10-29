#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

int** Allocate(const int rows, const int cols);
void Clear(int** arr, const int rows);

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int** arr, const int rows, const int cols);

void Print(int* arr, const int n);
void Print(int** arr, const int rows, const int cols);

void Sort(int** arr, const int rows, const int cols);

int* push_back(int arr[], int& n, int value);
int* pop_back(int arr[], int& n);

int** push_row_back(int** arr, int& rows, const int cols);
int** pop_row_back(int** arr, int& rows, const int cols);

void push_col_back(int** arr, const int rows, int& cols);
void pop_col_back(int** arr, const int rows, int& cols);

//#define DYNAMIC_MEMORY_1
#define DYNAMIC_MEMORY_2

void main()
{
	setlocale(LC_ALL, "");

#ifdef DYNAMIC_MEMORY_1
	int n;
	cout << "������� ������ �������: "; cin >> n;
	int* arr = new int[n];
	FillRand(arr, n);
	Print(arr, n);

	int value;
	cout << "������� ����������� ��������: "; cin >> value;

	arr = push_back(arr, n, value);
	Print(arr, n);

	arr = pop_back(arr, n);
	Print(arr, n);

	//Memory leaks
	delete[] arr;
#endif // DYNAMIC_MEMORY_1

	int number = 2583;
	do
	{
		cout << number % 10;
	} while (number /= 10);
	cout << endl;

	cout << typeid(2583).name() << endl;
	cout << sizeof('+') << endl;
	cout << sizeof("+") << endl;

	int rows;
	int cols;
	cout << "������� ���������� �����: "; cin >> rows;
	cout << "������� ���������� ��������� ������: "; cin >> cols;
	cout << endl;
	///////////////////////////////////////////////////////////////////////////
	int** arr = Allocate(rows, cols);
	cout << arr << endl;
	FillRand(arr, rows, cols);
	Print(arr, rows, cols);
	cout << "��������������� ������:\n";
	Sort(arr, rows, cols);
	Print(arr, rows, cols);

	cout << "push_row_back:\n";
	arr = push_row_back(arr, rows, cols);
	FillRand(arr[rows - 1], cols, 100, 1000);
	Print(arr, rows, cols);

	cout << "pop_row_back:\n";
	arr = pop_row_back(arr, rows, cols);
	Print(arr, rows, cols);

	cout << "push_col_back:\n";
	push_col_back(arr, rows, cols);
	for (int i = 0; i < rows; i++)arr[i][cols - 1] = rand() % 1000;
	Print(arr, rows, cols);

	cout << "pop_col_back:\n";
	pop_col_back(arr, rows, cols);
	Print(arr, rows, cols);

	///////////////////////////////////////////////////////////////////////////
	Clear(arr, rows);
}

int** Allocate(const int rows, const int cols)
{
	///////////////////////////////////////////////////////////////////////////
	///////////		���������� ���������� ������������� �������		///////////
	///////////////////////////////////////////////////////////////////////////
	//1) �������� ������ ��� ������ ����������:
	int** arr = new int*[rows];
	//2) ������� ������ ���������� �������:
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols] {};
	}
	///////////////////////////////////////////////////////////////////////////
	return arr;
}
void Clear(int** arr, const int rows)
{
	///////////////////////////////////////////////////////////////////////////
	///////////		���������� ���������� ������������� �������		///////////
	///////////////////////////////////////////////////////////////////////////

	//1) ������� ������ ���������� �������:
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}

	//2) ������� ������ ����������:
	delete[] arr;
}

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(int** arr, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void Print(int* arr, const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(int** arr, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void Sort(int** arr, const int rows, const int cols)
{
	int iterations = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			for (int k = i; k < rows; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < cols; l++)
				{
					//arr[i][j] - ��������� �������
					//arr[k][l] - ������������ �������
					if (arr[k][l] < arr[i][j])
					{
						swap(arr[i][j], arr[k][l]);
					}
					iterations++;
				}
			}
		}
	}
	printf("������ ������������ �� %d ��������\n", iterations);
}

int* push_back(int arr[], int& n, int value)
{
	//1) ������� �������� ������ ������� �������:
	int* buffer = new int[n + 1]{};

	//2) �������� ��� ���������� ��������� ������� � ��������:
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}

	//3) ������� �������� ������:
	delete[] arr;

	//4) ��������� ����� ��������� ������� ������� ������ �������:
	arr = buffer;
	//buffer = nullptr;

	//5) ������ � ������� 'arr' ��������� �����, ���� ����� ��� ���� ��������:
	arr[n] = value;

	//6) ����� ���� ��� � ������� �������� ����� �������, ���������� ��� ��������� ����������� �� 1:
	n++;

	//Mission complete.
	return buffer;
}

int* pop_back(int arr[], int& n)
{
	int* buffer = new int[--n]{};
	for (int i = 0; i < n; i++)buffer[i] = arr[i];
	delete[] arr;
	return buffer;
}

int** push_row_back(int** arr, int& rows, const int cols)
{
	//1) ������� �������� ������ ����������:
	int** buffer = new int*[rows + 1]{};

	//2) �������� ������ ����� �� ��������� ������� � ��������:
	for (int i = 0; i < rows; i++)buffer[i] = arr[i];

	//3) ������� �������� ������ ����������:
	delete[] arr;

	//4)  ��������� ����� ������� ������� ���������� ������� ������ ������� ����������:
	arr = buffer;

	//5) ������ � ������� ���������� ���� ����� ��� ���������� ����� � ����� �������:
	arr[rows] = new int[cols] {};

	//6) ����� ���������� ������ � ������ ���������� ��� ����� ������������� �� 1�
	rows++;

	return arr;
}

int** pop_row_back(int** arr, int& rows, const int cols)
{
	//1) ������� ��������� ������ �� ������:
	delete[] arr[rows - 1];
	//2) �������������� ������ ����������:
	int** buffer = new int*[--rows]{};
	for (int i = 0; i < rows; i++)buffer[i] = arr[i];
	delete[] arr;
	return buffer;
}

void push_col_back(int** arr, const int rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		int* buffer = new int[cols + 1]{};
		for (int j = 0; j < cols; j++)buffer[j] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols++;
}

void pop_col_back(int** arr, const int rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		int* buffer = new int[cols - 1]{};
		for (int j = 0; j < cols - 1; j++)buffer[j] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols--;
}