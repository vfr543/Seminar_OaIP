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
	if (maxInd(mas) == 1 && minInd(mas) == 4) {
		int temp = mas[maxInd(mas)];
		for (int i = minInd(mas); i < n; i++) {
			mas[i] = temp;
		}
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << mas[i] << " ";
	}
	return 0;
}
