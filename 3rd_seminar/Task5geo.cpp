#include <iostream>
#include <cmath>
using namespace std;
double dist(int x1, int y1, int x2, int y2) {
	double d = pow(pow(x2 - x1, 2) + pow(y2 - y1, 2), 0.5);
	return d;
}
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
	if (((x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1)) == 0) {
		cout << "����� ����� �� ����� ������";
	}
	else {
		cout << "����� �� ����� �� ����� ������";
	}
	return 0;
}