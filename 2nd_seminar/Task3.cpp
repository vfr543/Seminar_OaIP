#include <iostream>
using namespace std;
int main() {
	int C, F;
	setlocale(LC_ALL, "Russian");
	cout << "������� ����������� � �������� �������: ";
	cin >> C;
	F = C * 9 / 5 + 32;
	cout << endl << "����������� � �������� ����������: " << F << endl;
		return 0;
}