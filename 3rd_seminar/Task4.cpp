#include <iostream>
using namespace std;
int maxInd(double masi[]) {
	double a = masi[0];
	int b = 0;
	for (int i = 0; i < 15; i++) {
		if (masi[i] > a) {
			a = masi[i];
			b = i;
		}
	}
	return b;
}
int minInd(double masi[]) {
	double a = masi[0];
	int b = 0;
	for (int i = 0; i < 15; i++) {
		if (masi[i] <= a) {
			a = masi[i];
			b = i;
		}
	}
	return b;
}
int main() {
	setlocale(LC_ALL, "Russian");
	int n = 15, count = 0;
	double mas[15];
	for (int i = 0; i < n; i++) {
		cout << "Введите число A" << i + 1 << " : ";
		cin >> mas[i];
	}
	if (maxInd(mas) < minInd(mas)) {
		int temp = mas[maxInd(mas)] * mas[minInd(mas)];
		cout << endl << temp << endl;
	}
	else {
		cout << endl << "Максимальный элемент не предшествует минимальному" << endl;
	}
	return 0;
}
