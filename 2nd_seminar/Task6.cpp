#include <iostream>
using namespace std;
int main() {
	int age;
	setlocale(LC_ALL, "Russian");
	cout << "������� ���� �������: ";
	cin >> age;
	if (age > 0 && age < 18) {
		cout << endl << "������� ������ 18 ���.";
	}
	else if (age >= 18 && age < 60) {
		cout << endl << "������� ������ 18 � ������ 60 ���.";
	}
	else if (age >= 60) {
		cout << endl << "������� ������ 60 ���.";
	}
	else {
		cout << endl << "����� ������������ �������.";
	}
		return 0;
}