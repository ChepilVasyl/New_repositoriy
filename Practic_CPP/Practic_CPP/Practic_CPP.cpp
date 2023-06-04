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
    int a;
    cout << "¬вед≥ть число дл€ визначенн€ його куба" << endl;
    cout << "¬вед≥ть число" << endl;
    cin >> a;
    cout << " уб числа = " << Kub_chisla(a) << endl;
    cout << "ѕерев≥рка комм≥ту" << endl;

    return 0;
}
