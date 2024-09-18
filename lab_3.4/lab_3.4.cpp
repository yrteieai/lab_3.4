// Lab_03_4.cpp
// < Стефурак Анна >
// Лабораторна робота No 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 14

#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double x; // вхідний аргумент (координата x)
    double y; // вхідний параметр (координата y)
    double R1; // радіус внутрішнього кола
    double R2; // радіус зовнішнього кола

    // Введення координат точки
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    // Введення радіусів кол
    cout << "R1 = "; cin >> R1;
    cout << "R2 = "; cin >> R2;

    // Обчислення відстані від точки до центру координат
    double distance = sqrt(x * x + y * y);

    // розгалуження в повній формі
    if (distance >= R1 && distance <= R2) {
        cout << "yes" << endl; // Точка належить сірій області
    }
    else {
        cout << "no" << endl; // Точка не належить сірій області
    }

    cin.get();
    return 0;
}
