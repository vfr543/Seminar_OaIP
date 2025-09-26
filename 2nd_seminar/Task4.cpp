#include <iostream>
using namespace std;
int main() {
	int a;
	setlocale(LC_ALL, "Russian");
	cout << "Введите число: ";
	cin >> a;
	if (a % 2 == 0) {
		cout << endl << "Число " << a << " - чётное.";
	}
	else {
		cout << endl << "Число " << a << " - нечётное.";
	}
		return 0;

}
