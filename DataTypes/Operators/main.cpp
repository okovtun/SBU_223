//Operators
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define ARITHMETICAL_OPERATORS	//1) Арифметические операторы
//#define ASSIGNMENT_OPERATOR		//2) Оператор присваивания =
//#define INCREMENT_DECREMENT		//3) Increment/Decrement ( ++ / -- )
//#define COMPOUND_ASSIGNMENTS		//4) Составные присваивания
//#define COMPARISON_OPERATORS		//5) Операторы сравнения
#define LOGICAL_OPERATORS			//6) Логические операторы

void main()
{
	setlocale(LC_ALL, "Russian");
	//Expression - это синтаксическая конструкция, состоящая из операндов и операторов,
	//заканчивающаяся ;

#ifdef ARITHMETICAL_OPERATORS
	3;
	-3;		//Unary minus
	8 - 3;	//Binary minus
	8 * 3;	//Binary asterisc
	//*3;		//

	//Unary:	+, -;
	//Binary:	+, -, *, /, %;
	//% - остаток от деления
	cout << 17 / 3 << endl;
	cout << 17 % 3 << endl;
	//cout << 3. % 17 << endl;
	//%10 - младший разряд десятичного числа
	//%2  - младший разряд двоичного числа
	//и т.д.  
#endif // ARITHMETICAL_OPERATORS

#ifdef ASSIGNMENT_OPERATOR
	//		l-value = r-value;
	//int a = 2;
	//int b = 3 + a * 4 - 2 / 8;

	int a, b, c;
	a = b = (c = 0) + 1;
	cout << a << "\t" << b << "\t" << c << endl;
#endif // ASSIGNMENT_OPERATOR

#ifdef INCREMENT_DECREMENT
	int i = 0;
	++i;	//Prefix increment
	i++;	//Postfix increment
	--i;	//Prefix decrement
	i--;	//Suffix decrement

	int j = i++ + 2;

	cout << j << endl;
	cout << i << endl;
#endif // INCREMENT_DECREMENT

#ifdef COMPOUND_ASSIGNMENTS
	//	+=, -=, *=, /=, %=
	int a = 2;
	int b = 3;

	a = a + b;
	a += b;
#endif // COMPOUND_ASSIGNMENTS

#ifdef COMPARISON_OPERATORS
	double a = 22.56;
	cout << (a == 22.56) << endl;
#endif // COMPARISON_OPERATORS


	/*cout << true << endl;
	cout << false << endl;*/
	//cout << (!true == false) << endl;;;;;;;;;;;;;

	cout << (true || false || false) << endl;
	cout << (true && true && true) << endl;
}