#include <iostream>
using namespace std;
int main() {
	int C, F;
	setlocale(LC_ALL, "Russian");
	cout << "Введите температуру в градусах Цельсия: ";
	cin >> C;
	F = C * 9 / 5 + 32;
	cout << endl << "Температура в градусах Фаренгейта: " << F << endl;
		return 0;
}