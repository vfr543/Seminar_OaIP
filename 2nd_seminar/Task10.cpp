#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите число: ";
	cin >> n;
	if (n == 0) {
		cout << endl << "Число равно 0." << endl;
	}
	else if (n > 0) {
		cout << endl << "Число положительное." << endl;
	}
	else {
		cout << endl << "Число отрицательное." << endl;
	}
		return 0;

}
