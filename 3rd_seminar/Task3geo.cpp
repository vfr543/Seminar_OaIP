#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int x1, y1, x2, y2, x3, y3, x4, y4;
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
	double cx = (x1 + x2 + x3) / 3;
	double cy = (y1 + y2 + y3) / 3;
	cout << "���������� ������ ����: " << cx << ", " << cy;
	return 0;
}