// Lab_03_4.cpp
// < �������� ���� >
// ����������� ������ No 3.4
// ������������, ������ ������� �������.
// ������ 14

#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double x; // ������� �������� (���������� x)
    double y; // ������� �������� (���������� y)
    double R1; // ����� ����������� ����
    double R2; // ����� ���������� ����

    // �������� ��������� �����
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    // �������� ������ ���
    cout << "R1 = "; cin >> R1;
    cout << "R2 = "; cin >> R2;

    // ���������� ������ �� ����� �� ������ ���������
    double distance = sqrt(x * x + y * y);

    // ������������ � ����� ����
    if (distance >= R1 && distance <= R2) {
        cout << "yes" << endl; // ����� �������� ��� ������
    }
    else {
        cout << "no" << endl; // ����� �� �������� ��� ������
    }

    cin.get();
    return 0;
}
