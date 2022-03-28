
//  4.	Через указатель на указатель на указатель посчитать идеальный вес.
//  Ввести рост и реальный вес, показать сколько кг нужно сбросить или набрать.
//  Идеальный вес = Рост — 110.

#include <iostream>
using namespace std;


int main()
{
    system("chcp 1251 > 0");
    int growth;
    cout << "введите свой рост!\n";
    cin >> growth;

    int* pg = &growth;
    int** ppg = &pg;
    int*** pppg = &ppg;

    int weight;
    cout << "введите свой вес!\n";
    cin >> weight;

    int* pw = &weight;
    int** ppw = &pw;
    int*** pppw = &ppw;

    ***pppg - 110 < ***pppw ? cout << "нужно сбросить " << ***pppw - (***pppg - 110) << " килограмм\n"
        : ***pppg - 110 > ***pppw ? cout << "нужно набрать " << (***pppg - 110) - ***pppw << " килограмм\n"
        : cout << "у вас идеальный вес!!!\n";
}



