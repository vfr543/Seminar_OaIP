#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "������� �����: ";
	cin >> n;
	if (n == 0) {
		cout << endl << "����� ����� 0." << endl;
	}
	else if (n > 0) {
		cout << endl << "����� �������������." << endl;
	}
	else {
		cout << endl << "����� �������������." << endl;
	}
		return 0;
}