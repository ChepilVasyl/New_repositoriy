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
    cout << "������ ����� ��� ���������� ���� ����" << endl;
    cout << "������ �����" << endl;
    cin >> a;
    cout << "��� ����� = " << Kub_chisla(a) << endl;
    cout << "�������� ������" << endl;

    return 0;
}
