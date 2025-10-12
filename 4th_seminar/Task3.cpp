#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int matrix[3][3];
	double s;
	cout << "Введите координаты трёх точек:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> matrix[i][j];
		}
		matrix[i][2] = 1;
	}
	s = (pow(-1, 3 + 1) * matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]) +
		pow(-1, 3 + 2) * matrix[1][2] * (matrix[0][0] * matrix[2][1] - matrix[0][1] * matrix[2][0]) +
		pow(-1, 3 + 3) * matrix[2][2] * (matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]));
	if (s == 0) {
		cout << "Точки коллинеарны";
	}
	else {
		cout << "Точки неколлинеарны";
	}
	return 0;
}
