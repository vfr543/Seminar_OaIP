#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int n, count = 0;
	cout << "������� ����� n: ";
	cin >> n;
	int an = 0;
	for (int i = 1; i < n + 1; i++) {
		cout << "������� ����� A" << i << " : ";
		cin >> an;
		if (pow(2, i) < an) {
			count++;
		}
	}
	cout << endl << count;
	return 0;
}