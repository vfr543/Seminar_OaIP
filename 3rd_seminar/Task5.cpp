#include <iostream>
using namespace std;
int maxInd(int masi[]) {
	int a = masi[0];
	int b = 0;
	for (int i = 0; i < 10; i++) {
		if (masi[i] > a) {
			a = masi[i];
			b = i;
		}
	}
	return b;
}
int minInd(int masi[]) {
	int a = masi[0];
	int b = 0;
	for (int i = 0; i < 10; i++) {
		if (masi[i] < a) {
			a = masi[i];
			b = i;
		}
	}
	return b;
}
int main() {
	setlocale(LC_ALL, "Russian");
	int n = 10, count = 0;
	int mas[10];
	for (int i = 0; i < n; i++) {
		cout << "Введите число A" << i + 1 << " : ";
		cin >> mas[i];
	}
	if (maxInd(mas) == 9 && minInd(mas) == 4) {
		int temp = (mas[maxInd(mas)] + mas[minInd(mas)]) / 2;
		cout << endl << temp << endl;
	}
	else {
		cout << endl << "Минимальный элемент не расположен на 5 месте и/или максимальный элемент не расположен на 10 месте" << endl;
	}
	return 0;
}
