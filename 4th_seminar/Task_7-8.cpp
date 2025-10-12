#include <iostream>
#include <vector>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a, matrix[3][4];
	double det, dx, dy, dz, x, y, z;
	cout << "¬ведите матрицу: " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> a;
			matrix[i][j] = a;
		}
	}
	det = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1])-
		matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0])+
		matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
	dx = matrix[0][3] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) -
		matrix[0][1] * (matrix[1][3] * matrix[2][2] - matrix[1][2] * matrix[2][3]) +
		matrix[0][2] * (matrix[1][3] * matrix[2][1] - matrix[1][1] * matrix[2][3]);
	dy = matrix[0][0] * (matrix[1][3] * matrix[2][2] - matrix[1][2] * matrix[2][3]) -
		matrix[0][3] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) +
		matrix[0][2] * (matrix[1][0] * matrix[2][3] - matrix[1][3] * matrix[2][0]);
	dz = matrix[0][0] * (matrix[1][1] * matrix[2][3] - matrix[1][3] * matrix[2][1]) -
		matrix[0][1] * (matrix[1][0] * matrix[2][3] - matrix[1][3] * matrix[2][0]) +
		matrix[0][3] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
	x = dx / det;
	y = dy / det;
	z = dz / det;
	cout << "x = " << x << " y = " << y << " z = " << z << endl << det;
	return 0;
}