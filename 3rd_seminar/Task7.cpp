#include <iostream>
using namespace std;
int maxInd(int masi[]) {
	int a = masi[0];
	int b = 0;
	for (int i = 0; i < 15; i++) {
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
	int mas[15];
	for (int i = 0; i < n; i++) {
		cout << "Введите число A" << i + 1 << " : ";
		cin >> mas[i];
	}
	if (mas[maxInd(mas)] == 0 || mas[minInd(mas)] == 0) {
		int temp = minInd(mas);
		for (int i = 0; i < temp; i++) {
			mas[i] = 0;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << mas[i] << endl;
	}
	return 0;
}
