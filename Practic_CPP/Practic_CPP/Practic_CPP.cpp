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
    cout << "������ ����� ����" << endl;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int digit;
    cout << "������ �����" << endl;
    cin >> digit;
    cout << "��������� ��������� ����� �� ������ 2 = " << Kvadrat_chisla(digit)<<endl;
    cout << "��������� ��������� ����� �� ������ 2 = " << Kub_chisla(digit) << endl;

    return 0;
}
