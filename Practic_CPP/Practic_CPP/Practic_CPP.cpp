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
    cout << "������ ������� �" << endl;
    cin >> a;
    cout << "������ ������� �" << endl;
    cin >> b;
    cout << "����� �������� = "<< Square_area(a,b) << endl;
    cout << "������ ����� ��� ���������� ���� ����" << endl;
    cout << "������ �����" << endl;
    cin >> a;
    cout << "��� ����� = " << Kub_chisla(a) << endl;

    return 0;
}
