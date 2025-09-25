#include <iostream>
using namespace std;
int main() {
	int a;
	setlocale(LC_ALL, "Russian");
	cout << "¬ведите число: ";
	cin >> a;
	if (a % 3 == 0 && a % 5 == 0) {
		cout << endl << "„исло " << a << " делитс€ на 3 и на 5";
	}
	else if (a % 3 == 0) {
		cout << endl << "„исло " << a << " - делитс€ только на 3";
	}
	else if (a % 5 == 0) {
		cout << endl << "„исло " << a << " - делитс€ только на 5";
	}
	else {
		cout << endl << "„исло " << a << " - не делитс€ ни на 3 ни на 5";
	}
		return 0;
}