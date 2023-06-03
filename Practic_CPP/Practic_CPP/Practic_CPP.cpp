#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int Square_area(int a, int b)
{
    return a * b;
}
int Kub_chisla(int a)
{
    return a * a * a;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b, c;
    cout << "Введіть сторону а" << endl;
    cin >> a;
    cout << "Введіть сторону б" << endl;
    cin >> b;
    cout << "Проща квадрата = "<< Square_area(a,b) << endl;
    cout << "Введіть число для визначення його куба" << endl;
    cout << "Введіть число" << endl;
    cin >> a;
    cout << "Куб числа = " << Kub_chisla(a) << endl;

    return 0;
}
