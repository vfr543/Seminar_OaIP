#include <iostream>
using namespace std;
int main() {
	int cm, m;
	setlocale(LC_ALL, "Russian");
	cout << "������� ����� � �����������: ";
	cin >> cm;
	m = cm / 100;
	cm = cm - m * 100;
	cout << endl << "������: " << m << " ������ " << cm << " �����������." << endl;
		return 0;
}