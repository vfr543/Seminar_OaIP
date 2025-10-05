#include <iostream>
#include <cmath>
using namespace std;
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
	double cx = (x1 + x2 + x3) / 3;
	double cy = (y1 + y2 + y3) / 3;
	cout << "Координаты центра масс: " << cx << ", " << cy;
	return 0;
}
