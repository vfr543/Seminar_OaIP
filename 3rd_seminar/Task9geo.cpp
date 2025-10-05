#include <iostream>
#include <vector>
using namespace std;
int vectPr(int x1, int y1, int x2, int y2, int x3, int y3) {
	int pr = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);
	return pr;
}
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
	vector<int> arrx1;
	vector<int> arry1;
	vector<int> arrx2;
	vector<int> arry2;
	int n1, n2;
	bool temp = false;
	cout << "Введите количество вершин: ";
	cin >> n1;
	int value1, value2;
	for (int i = 0; i < n1; i++) {
		cout << "Введите координаты x вершины " << i + 1 << " : ";
		cin >> value1;
		cout << "Введите координаты y вершины " << i + 1 << " : ";
		cin >> value2;
		arrx1.push_back(value1);
		arry1.push_back(value2);
	}
	cout << "Введите количество вершин: ";
	cin >> n2;
	for (int i = 0; i < n2; i++) {
		cout << "Введите координаты x вершины " << i + 1 << " : ";
		cin >> value1;
		cout << "Введите координаты y вершины " << i + 1 << " : ";
		cin >> value2;
		arrx2.push_back(value1);
		arry2.push_back(value2);
	}
	arrx1.push_back(arrx1[0]);
	arry1.push_back(arry1[0]);
	arrx2.push_back(arrx2[0]);
	arry2.push_back(arry2[0]);
	for (int j = 0; j < n2; j++) {
		for (int i = 0; i < n1; i++) {
			int d1 = vectPr(arrx1[i], arry1[i], arrx1[i + 1], arry1[i + 1], arrx2[j], arry2[j]);
			int d2 = vectPr(arrx1[i], arry1[i], arrx1[i + 1], arry1[i + 1], arrx2[j + 1], arry2[j + 1]);
			int d3 = vectPr(arrx2[j], arry2[j], arrx2[j + 1], arry2[j + 1], arrx1[i], arry1[i]);
			int d4 = vectPr(arrx2[j], arry2[j], arrx2[j + 1], arry2[j + 1], arrx1[i + 1], arry1[i + 1]);
			if (((d1 < 0 && d2 > 0) || (d1 > 0 && d2 < 0)) && ((d3 < 0 && d4 > 0) || (d3 > 0 && d4 < 0))) {
				temp = true;
			}
			else if ((d1 == 0 && onLine(arrx1[i], arry1[i], arrx1[i + 1], arry1[i + 1], arrx2[j], arry2[j])) ||
					(d2 == 0 && onLine(arrx1[i], arry1[i], arrx1[i + 1], arry1[i + 1], arrx2[j + 1], arry2[j + 1])) ||
					(d3 == 0 && onLine(arrx2[j], arry2[j], arrx2[j + 1], arry2[j + 1], arrx1[i], arry1[i])) ||
					(d4 == 0 && onLine(arrx2[j], arry2[j], arrx2[j + 1], arry2[j + 1], arrx1[i + 1], arry1[i + 1]))) {
				temp = true;
			}
		}
		if (temp) {
			break;
		}
	}
	if (temp) {
		cout << "Многогранники пересекаются";
	}
	else {
		cout << "Многогранники не пересекаются";
	}
	return 0;
}
