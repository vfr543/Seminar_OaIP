#include <iostream>
using namespace std;
int main() {
	int age;
	setlocale(LC_ALL, "Russian");
	cout << "Введите свой возраст: ";
	cin >> age;
	if (age > 0 && age < 18) {
		cout << endl << "Возраст меньше 18 лет.";
	}
	else if (age >= 18 && age < 60) {
		cout << endl << "Возраст больше 18 но меньше 60 лет.";
	}
	else if (age >= 60) {
		cout << endl << "Возраст больше 60 лет.";
	}
	else {
		cout << endl << "Введён некорректный возраст.";
	}
		return 0;

}
