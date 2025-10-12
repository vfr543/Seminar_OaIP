#include <iostream>
#include <vector>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a, matrix[2][3];
	double det, dx, dy, x, y;
	cout << "Введите матрицу: " << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> a;
			matrix[i][j] = a;
		}
	}
	det = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
	dx = matrix[0][2] * matrix[1][1] - matrix[0][1] * matrix[1][2];
	dy = matrix[0][0] * matrix[1][2] - matrix[0][2] * matrix[1][0];
	x = dx / det;
	y = dy / det;
	cout << "x = " << x << " y = " << y << endl;
	return 0;
}
