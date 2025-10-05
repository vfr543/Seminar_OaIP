#include <iostream>
#include <cmath>
using namespace std;
int min(int x1, int x2) {
	if (x1 < x2) {
		return x1;
	}
	else {
		return x2;
	}
}
int max(int x1, int x2) {
	if (x1 > x2) {
		return x1;
	}
	else {
		return x2;
	}
}
double vectPr(int x1, int y1, int x2, int y2, int x3, int y3) {
	int pr = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);
	return pr;
}
bool onLine(int x1, int y1, int x2, int y2, int x3, int y3) {
	if (min(x1, x2) <= x3 && x3 <= max(x1, x2) && min(y1, y2) <= y3 && y3 <= max(y1, y2)) {
		return true;
	}
	else {
		return false;
	}
}
int main() {
	setlocale(LC_ALL, "Russian");
	int x1, y1, x2, y2, x3, y3, x4, y4;
	bool temp;
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
	int d1 = vectPr(x1, y1, x2, y2, x3, y3);
	int d2 = vectPr(x1, y1, x2, y2, x4, y4);
	int d3 = vectPr(x3, y3, x4, y4, x1, y1);
	int d4 = vectPr(x3, y3, x4, y4, x2, y2);
	if (((d1 < 0 && d2 > 0) || (d1 > 0 && d2 < 0)) && ((d3 < 0 && d4 > 0) || (d3 > 0 && d4 < 0))) {
		temp = true;
	}
	else if ((d1 == 0 && onLine(x1, y1, x2, y2, x3, y3)) || (d2 == 0 && onLine(x1, y1, x2, y2, x4, y4)) || (d3 == 0 && onLine(x3, y3, x4, y4, x1, y1)) || (d4 == 0 && onLine(x3, y3, x4, y4, x2, y2))) {
		temp = true;
	}
	else {
		temp = false;
	}
	if (temp) {
		cout << "Отрезки пересекаются";
	}
	else {
		cout << "Отрезки не пересекаются";
	}
	return 0;
}
