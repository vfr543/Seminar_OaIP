#include <iostream>
using namespace std;
int main() {
	int a;
	setlocale(LC_ALL, "Russian");
	cout << "Введите число: ";
	cin >> a;
	if (a % 3 == 0 && a % 5 == 0) {
		cout << endl << "Число " << a << " - делится на 3 и на 5";
	}
	else if (a % 3 == 0) {
		cout << endl << "Число " << a << " - делится только на 3";
	}
	else if (a % 5 == 0) {
		cout << endl << "Число " << a << " - делится только на 5";
	}
	else {
		cout << endl << "Число " << a << " - не делится ни на 3 и ни на 5";
	}
		return 0;

}
