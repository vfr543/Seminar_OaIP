#include <iostream>
using namespace std;
int main() {
	int a;
	setlocale(LC_ALL, "Russian");
	cout << "������� �����: ";
	cin >> a;
	if (a % 3 == 0 && a % 5 == 0) {
		cout << endl << "����� " << a << " ������� �� 3 � �� 5";
	}
	else if (a % 3 == 0) {
		cout << endl << "����� " << a << " - ������� ������ �� 3";
	}
	else if (a % 5 == 0) {
		cout << endl << "����� " << a << " - ������� ������ �� 5";
	}
	else {
		cout << endl << "����� " << a << " - �� ������� �� �� 3 �� �� 5";
	}
		return 0;
}