#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int x1, y1, x2, y2, x3, y3;
	cout << "������� ���������� x ������ �����: ";
	cin >> x1;
	cout << "������� ���������� y ������ �����: ";
	cin >> y1;
	cout << "������� ���������� x ������ �����: ";
	cin >> x2;
	cout << "������� ���������� y ������ �����: ";
	cin >> y2;
	cout << "������� ���������� x ������� �����: ";
	cin >> x3;
	cout << "������� ���������� y ������� �����: ";
	cin >> y3;
	double s = abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0;
	cout << "S = " << s;
	return 0;
}