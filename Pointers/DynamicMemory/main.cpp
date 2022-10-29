#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

template<typename T>T** Allocate(const int rows, const int cols);
template<typename T>void Clear(T** arr, const int rows);

template<typename T>void FillRand(T arr[], const int n, int minRand = 0, int maxRand = 100);
template<typename T>void FillRand(T** arr, const int rows, const int cols);

template<typename T>void Print(T* arr, const int n);
template<typename T>void Print(T** arr, const int rows, const int cols);

template<typename T>T* push_back(T arr[], int& n, int value);
template<typename T>T* pop_back( T arr[], int& n);

template<typename T>T** push_row_back(T** arr, int& rows, const int cols);
template<typename T>T** pop_row_back( T** arr, int& rows, const int cols);

template<typename T>void push_col_back(T** arr, const int rows, int& cols);
template<typename T>void pop_col_back( T** arr, const int rows, int& cols);

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

	int rows;
	int cols;
	cout << "������� ���������� �����: "; cin >> rows;
	cout << "������� ���������� ��������� ������: "; cin >> cols;
	cout << endl;
	///////////////////////////////////////////////////////////////////////////
	typedef double DataType;
	DataType** arr = Allocate<DataType>(rows, cols);

	FillRand(arr, rows, cols);
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
	for (int i = 0; i < rows; i++)arr[i][cols - 1] = rand()%1000;
	Print(arr, rows, cols);

	cout << "pop_col_back:\n";
	pop_col_back(arr, rows, cols);
	Print(arr, rows, cols);

	///////////////////////////////////////////////////////////////////////////
	Clear(arr, rows);
}

template<typename T>T** Allocate(const int rows, const int cols)
{
	///////////////////////////////////////////////////////////////////////////
	///////////		���������� ���������� ������������� �������		///////////
	///////////////////////////////////////////////////////////////////////////
	//1) �������� ������ ��� ������ ����������:
	T** arr = new T*[rows];
	//2) ������� ������ ���������� �������:
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new T[cols] {};
	}
	///////////////////////////////////////////////////////////////////////////
	return arr;
}
template<typename T>void Clear(T** arr, const int rows)
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

template<typename T>void FillRand(T arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = double(rand() % (maxRand - minRand) + minRand)/100;
	}
}
template<typename T>void FillRand(T** arr, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = double(rand() % 10000)/100;
		}
	}
}
template<typename T>void Print(T* arr, const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template<typename T>void Print(T** arr, const int rows, const int cols)
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

template<typename T>T* push_back(T arr[], int& n, int value)
{
	//1) ������� �������� ������ ������� �������:
	T* buffer = new T[n + 1]{};

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

template<typename T>T* pop_back(T arr[], int& n)
{
	T* buffer = new T[--n]{};
	for (int i = 0; i < n; i++)buffer[i] = arr[i];
	delete[] arr;
	return buffer;
}

template<typename T>T** push_row_back(T** arr, int& rows, const int cols)
{
	//1) ������� �������� ������ ����������:
	T** buffer = new T*[rows + 1]{};

	//2) �������� ������ ����� �� ��������� ������� � ��������:
	for (int i = 0; i < rows; i++)buffer[i] = arr[i];

	//3) ������� �������� ������ ����������:
	delete[] arr;

	//4)  ��������� ����� ������� ������� ���������� ������� ������ ������� ����������:
	arr = buffer;

	//5) ������ � ������� ���������� ���� ����� ��� ���������� ����� � ����� �������:
	arr[rows] = new T[cols] {};

	//6) ����� ���������� ������ � ������ ���������� ��� ����� ������������� �� 1�
	rows++;

	return arr;
}

template<typename T>T** pop_row_back(T** arr, int& rows, const int cols)
{
	//1) ������� ��������� ������ �� ������:
	delete[] arr[rows - 1];
	//2) �������������� ������ ����������:
	T** buffer = new T*[--rows]{};
	for (int i = 0; i < rows; i++)buffer[i] = arr[i];
	delete[] arr;
	return buffer;
}

template<typename T>void push_col_back(T** arr, const int rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols + 1]{};
		for (int j = 0; j < cols; j++)buffer[j] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols++;
}

template<typename T>void pop_col_back(T** arr, const int rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols - 1]{};
		for (int j = 0; j < cols - 1; j++)buffer[j] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols--;
}