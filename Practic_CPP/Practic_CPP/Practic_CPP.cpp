#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int Kvadrat_chisla(int a)
{
    return a * a;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int digit;
    cout << "������ �����" << endl;
    cin >> digit;
    cout << "��������� ��������� ����� �� ������ 2 = " << Kvadrat_chisla(digit);

    return 0;
}
