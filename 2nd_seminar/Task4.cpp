#include <iostream>
using namespace std;
int main() {
	int a;
	setlocale(LC_ALL, "Russian");
	cout << "¬ведите число: ";
	cin >> a;
	if (a % 2 == 0) {
		cout << endl << "„исло " << a << " - чЄтное.";
	}
	else {
		cout << endl << "„исло " << a << " - нечЄтное.";
	}
		return 0;
}