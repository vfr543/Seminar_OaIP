#include <iostream>
using namespace std;
int main() {
	int a, b, S;
	setlocale(LC_ALL, "Russian");
	cout << "������� ����� ��������������: ";
	cin >> a;
	cout << "������� ������ ��������������: ";
	cin >> b;
	S = a * b;
	cout << endl << "������� ��������������: " << S << endl;
		return 0;
}