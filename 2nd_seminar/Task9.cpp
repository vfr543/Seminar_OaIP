#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int n, sum = 0;
	setlocale(LC_ALL, "Russian");
	cout << "������� �����: ";
	cin >> n;
	for (int i = 1; i < n + 1; i++) {
		if (i % 2 == 0 || i % 5 == 0) {
			sum += i;
		}
	}
	cout << endl << "����� ����� �� 1 �� n, ������� 2 ��� 5: " << sum << endl;
		return 0;
}