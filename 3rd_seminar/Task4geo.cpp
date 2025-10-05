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
	cout << "Введите координату x первой точки: ";
	cin >> x1;
	cout << "Введите координату y первой точки: ";
	cin >> y1;
	cout << "Введите координату x второй точки: ";
	cin >> x2;
	cout << "Введите координату y второй точки: ";
	cin >> y2;
	cout << "Введите координату x третьей точки: ";
	cin >> x3;
	cout << "Введите координату y третьей точки: ";
	cin >> y3;
	cout << "Введите координату x четвертой точки: ";
	cin >> x4;
	cout << "Введите координату y четвертой точки: ";
	cin >> y4;
	double diag = dist(x1, y1, x3, y3);
	cout << "Длина диагонали: " << diag;
	return 0;
}
