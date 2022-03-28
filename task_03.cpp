
 //   3.	Через указатели на указатели посчитать сумму двух чисел и записать в третье.

#include <iostream>
using namespace std;



int main()
{ 
	system("chcp 1251 > 0");
	
	int a = 7;
	int* pa = &a;
	int** ppa = &pa;

	int b = 5;
	int* pb = &b;
	int** ppb = &pb;

	int c;
	int* pc = &c;
	int** ppc = &pc;
	
	**ppc = **ppa + **ppb;

	cout << " число (а) = " << **ppa << ", число (b) = " << **ppb << ", сумма чисел (а) и (b) = " << **ppc << "\n";
}