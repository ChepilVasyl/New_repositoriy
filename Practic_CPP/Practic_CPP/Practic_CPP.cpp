#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int Square_area(int a, int b)
{
    return a * b;
}
int Volume_cube(int a, int b,int c)
{
    return a * b * c;
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
    cout << "������ ������� ���� ��� ���������� ���� ��'���" << endl;
    cout << "������ ������� �" << endl;
    cin >> a;
    cout << "������ ������� �" << endl;
    cin >> b;
    cout << "������ ������� c" << endl;
    cin >> c;
    cout << "��'�� ���� = " << Volume_cube(a, b, c) << endl;

    return 0;
}
