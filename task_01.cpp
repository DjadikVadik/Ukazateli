
//  1.	Создать две переменные и определить «расстояние» между ними в памяти.
//  Расстояние показать в переменных того же типа(вычесть из одного указателя другой).
//  Затем показать расстояние в байтах.

#include <iostream>
using namespace std;



int main()
{ 
	system("chcp 1251 > 0");
	int a, b;
	int* pa = &a;
	int* pb = &b;

	cout << "Расстояние между перемеными a и b = " << abs(pa - pb) << " переменных\n";
	cout << "Расстояние между перемеными a и b = " << abs(pa - pb) * sizeof(int) << " байт\n";
}