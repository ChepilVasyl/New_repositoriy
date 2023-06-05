#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int Kvadrat_chisla(int a)
{
    return a * a;
}
int Kub_chisla(int a)
{
    return a*a*a;
}
void Greeting()
{
    cout << "Перший мердж буде" << endl;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int digit;
    cout << "Введіть число" << endl;
    cin >> digit;
    cout << "Результат піднесення числа до степіня 2 = " << Kvadrat_chisla(digit)<<endl;
    cout << "Результат піднесення числа до степіня 2 = " << Kub_chisla(digit) << endl;

    return 0;
}
