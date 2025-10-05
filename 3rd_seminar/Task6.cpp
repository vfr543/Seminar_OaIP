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
		if (masi[i] < a) {
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
	if (maxInd(mas) == 0 && minInd(mas) == 1) {
		int temp = mas[maxInd(mas)] * mas[minInd(mas)];
		for (int i = 0; i < n; i++) {
			mas[i] /= 2;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << mas[i] << endl;
	}
	return 0;
}
