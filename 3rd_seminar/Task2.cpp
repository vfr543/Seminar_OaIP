#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int n, count = 0, max = 0;
	bool fl = 0;
	cout << "Введите число n: ";
	cin >> n;
	int an = 0;
	for (int i = 1; i < n + 1; i++) {
		cout << "Введите число A" << i << " : ";
		cin >> an;
		if (an % 2 == 0) {
			count++;
		}
		else {
			if (fl == 0){
				max = an;
				fl++;
			if (an > max) {
				max = an;
			}
		}
	}
	if (n != count) {
		cout << endl << "Максимальное нечётное число: " << max << endl << "Кол-во чётных чисел: " << count << endl;
	}
	else {
		cout << endl << "Нечетных чисел нет" << endl << "Кол-во чётных чисел: " << count << endl;
	}
	return 0;
}
