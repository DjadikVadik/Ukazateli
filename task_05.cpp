
//     5.	Создать пятижды указатель.Показать адреса всех 
//     элементов цепочки, используя только этот указатель.

#include <iostream>
using namespace std;


int main()
{
	int* p;
	int** pp = &p;
	int*** ppp = &pp;
	int**** pppp = &ppp;
	int***** ppppp = &pppp;

	cout << ppppp << "\n" << *ppppp << "\n" << **ppppp << "\n" << ***ppppp << "\n" << ****ppppp << "\n\n";
}
