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
    cout << "¬вед≥ть сторону а" << endl;
    cin >> a;
    cout << "¬вед≥ть сторону б" << endl;
    cin >> b;
    cout << "ѕроща квадрата = "<< Square_area(a,b) << endl;
    cout << "¬вед≥ть сторони куба дл€ визначенн€ його об'Їму" << endl;
    cout << "¬вед≥ть сторону а" << endl;
    cin >> a;
    cout << "¬вед≥ть сторону б" << endl;
    cin >> b;
    cout << "¬вед≥ть сторону c" << endl;
    cin >> c;
    cout << "ќб'Їм куба = " << Volume_cube(a, b, c) << endl;

    return 0;
}
