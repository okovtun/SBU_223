//#define PACKAGE __declspec(package)
#pragma once
#include<Windows.h>
#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n--------------------------------------------------\n"

const int ROWS = 5;
const int COLS = 3;

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);

template<typename T>void Print(T arr[], const int n);
template<typename T>void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>void ReversePrint(T arr[], const int n);

template<typename T>T  Sum(T arr[], const int n);
template<typename T>double Avg(T arr[], const int n);

template<typename T>T  minValueIn(T arr[], const int n);
template<typename T>T  maxValueIn(T arr[], const int n);
template<typename T>void shiftLeft(T arr[], const int n, int number_of_shifts);
template<typename T>void shiftRight(T arr[], const int n, int number_of_shifts);
template<typename T>void Sort(T arr[], const int n);
void UniqueRand(int arr[], const int n);