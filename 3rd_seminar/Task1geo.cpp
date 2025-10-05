#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int x1, y1, x2, y2, x3, y3;
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
	double s = abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0;
	cout << "S = " << s;
	return 0;
}
