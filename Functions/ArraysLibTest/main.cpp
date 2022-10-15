#include<Arrays.h>

#pragma comment (linker, "/INCLUDE:Print<int>")

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
}