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
	cout << "������� ���������� x ��������� �����: ";
	cin >> x4;
	cout << "������� ���������� y ��������� �����: ";
	cin >> y4;
	double p=dist(x1,y1,x2,y2)+dist(x2,y2,x3,y3)+dist(x3,y3,x4,y4)+dist(x4,y4,x1,y1);
	cout << "P = " << p;
	return 0;
}