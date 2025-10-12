#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int x, matrix[4][5];
	double a, b, c, d, det, r, da, db, dc, dd;
	cout << "¬ведите координаты 4 точек:" << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> x;
			matrix[i][j] = x;
		}
		matrix[i][3] = 1;
		matrix[i][4] = -(pow(matrix[i][0], 2) + pow(matrix[i][1], 2) + pow(matrix[i][2], 2));
	}
   det = matrix[0][0] * (matrix[1][1] * (matrix[2][2] * matrix[3][3] - matrix[2][3] * matrix[3][2]) - matrix[1][2] * (matrix[2][1] * matrix[3][3] - matrix[2][3] * matrix[3][1]) + matrix[1][3] * (matrix[2][1] * matrix[3][2] - matrix[2][2] * matrix[3][1])) -
		 matrix[0][1] * (matrix[1][0] * (matrix[2][2] * matrix[3][3] - matrix[2][3] * matrix[3][2]) - matrix[1][2] * (matrix[2][0] * matrix[3][3] - matrix[2][3] * matrix[3][0]) + matrix[1][3] * (matrix[2][0] * matrix[3][2] - matrix[2][2] * matrix[3][0])) +
		 matrix[0][2] * (matrix[1][0] * (matrix[2][1] * matrix[3][3] - matrix[2][3] * matrix[3][1]) - matrix[1][1] * (matrix[2][0] * matrix[3][3] - matrix[2][3] * matrix[3][0]) + matrix[1][3] * (matrix[2][0] * matrix[3][1] - matrix[2][1] * matrix[3][0])) -
		 matrix[0][3] * (matrix[1][0] * (matrix[2][1] * matrix[3][2] - matrix[2][2] * matrix[3][1]) - matrix[1][1] * (matrix[2][0] * matrix[3][2] - matrix[2][2] * matrix[3][0]) + matrix[1][2] * (matrix[2][0] * matrix[3][1] - matrix[2][1] * matrix[3][0]));
	da = matrix[0][4] * (matrix[1][1] * (matrix[2][2] * matrix[3][3] - matrix[2][3] * matrix[3][2]) - matrix[1][2] * (matrix[2][1] * matrix[3][3] - matrix[2][3] * matrix[3][1]) + matrix[1][3] * (matrix[2][1] * matrix[3][2] - matrix[2][2] * matrix[3][1])) -
		 matrix[0][1] * (matrix[1][4] * (matrix[2][2] * matrix[3][3] - matrix[2][3] * matrix[3][2]) - matrix[1][2] * (matrix[2][4] * matrix[3][3] - matrix[2][3] * matrix[3][4]) + matrix[1][3] * (matrix[2][4] * matrix[3][2] - matrix[2][2] * matrix[3][4])) +
		 matrix[0][2] * (matrix[1][4] * (matrix[2][1] * matrix[3][3] - matrix[2][3] * matrix[3][1]) - matrix[1][1] * (matrix[2][4] * matrix[3][3] - matrix[2][3] * matrix[3][4]) + matrix[1][3] * (matrix[2][4] * matrix[3][1] - matrix[2][1] * matrix[3][4])) -
		 matrix[0][3] * (matrix[1][4] * (matrix[2][1] * matrix[3][2] - matrix[2][2] * matrix[3][1]) - matrix[1][1] * (matrix[2][4] * matrix[3][2] - matrix[2][2] * matrix[3][4]) + matrix[1][2] * (matrix[2][4] * matrix[3][1] - matrix[2][1] * matrix[3][4]));
	db = matrix[0][0] * (matrix[1][4] * (matrix[2][2] * matrix[3][3] - matrix[2][3] * matrix[3][2]) - matrix[1][2] * (matrix[2][4] * matrix[3][3] - matrix[2][3] * matrix[3][4]) + matrix[1][3] * (matrix[2][4] * matrix[3][2] - matrix[2][2] * matrix[3][4])) -
		 matrix[0][4] * (matrix[1][0] * (matrix[2][2] * matrix[3][3] - matrix[2][3] * matrix[3][2]) - matrix[1][2] * (matrix[2][0] * matrix[3][3] - matrix[2][3] * matrix[3][0]) + matrix[1][3] * (matrix[2][0] * matrix[3][2] - matrix[2][2] * matrix[3][0])) +
		 matrix[0][2] * (matrix[1][0] * (matrix[2][4] * matrix[3][3] - matrix[2][3] * matrix[3][4]) - matrix[1][4] * (matrix[2][0] * matrix[3][3] - matrix[2][3] * matrix[3][0]) + matrix[1][3] * (matrix[2][0] * matrix[3][4] - matrix[2][4] * matrix[3][0])) -
		 matrix[0][3] * (matrix[1][0] * (matrix[2][4] * matrix[3][2] - matrix[2][2] * matrix[3][4]) - matrix[1][4] * (matrix[2][0] * matrix[3][2] - matrix[2][2] * matrix[3][0]) + matrix[1][2] * (matrix[2][0] * matrix[3][4] - matrix[2][4] * matrix[3][0]));
	dc = matrix[0][0] * (matrix[1][1] * (matrix[2][4] * matrix[3][3] - matrix[2][3] * matrix[3][4]) - matrix[1][4] * (matrix[2][1] * matrix[3][3] - matrix[2][3] * matrix[3][1]) + matrix[1][3] * (matrix[2][1] * matrix[3][4] - matrix[2][4] * matrix[3][1])) -
		 matrix[0][1] * (matrix[1][0] * (matrix[2][4] * matrix[3][3] - matrix[2][3] * matrix[3][4]) - matrix[1][4] * (matrix[2][0] * matrix[3][3] - matrix[2][3] * matrix[3][0]) + matrix[1][3] * (matrix[2][0] * matrix[3][4] - matrix[2][4] * matrix[3][0])) +
		 matrix[0][4] * (matrix[1][0] * (matrix[2][1] * matrix[3][3] - matrix[2][3] * matrix[3][1]) - matrix[1][1] * (matrix[2][0] * matrix[3][3] - matrix[2][3] * matrix[3][0]) + matrix[1][3] * (matrix[2][0] * matrix[3][1] - matrix[2][1] * matrix[3][0])) -
		 matrix[0][3] * (matrix[1][0] * (matrix[2][1] * matrix[3][4] - matrix[2][4] * matrix[3][1]) - matrix[1][1] * (matrix[2][0] * matrix[3][4] - matrix[2][4] * matrix[3][0]) + matrix[1][4] * (matrix[2][0] * matrix[3][1] - matrix[2][1] * matrix[3][0]));
	dd = matrix[0][0] * (matrix[1][1] * (matrix[2][2] * matrix[3][4] - matrix[2][4] * matrix[3][2]) - matrix[1][2] * (matrix[2][1] * matrix[3][4] - matrix[2][4] * matrix[3][1]) + matrix[1][4] * (matrix[2][1] * matrix[3][2] - matrix[2][2] * matrix[3][1])) -
		 matrix[0][1] * (matrix[1][0] * (matrix[2][2] * matrix[3][4] - matrix[2][4] * matrix[3][2]) - matrix[1][2] * (matrix[2][0] * matrix[3][4] - matrix[2][4] * matrix[3][0]) + matrix[1][4] * (matrix[2][0] * matrix[3][2] - matrix[2][2] * matrix[3][0])) +
		 matrix[0][2] * (matrix[1][0] * (matrix[2][1] * matrix[3][4] - matrix[2][4] * matrix[3][1]) - matrix[1][1] * (matrix[2][0] * matrix[3][4] - matrix[2][4] * matrix[3][0]) + matrix[1][4] * (matrix[2][0] * matrix[3][1] - matrix[2][1] * matrix[3][0])) -
		 matrix[0][4] * (matrix[1][0] * (matrix[2][1] * matrix[3][2] - matrix[2][2] * matrix[3][1]) - matrix[1][1] * (matrix[2][0] * matrix[3][2] - matrix[2][2] * matrix[3][0]) + matrix[1][2] * (matrix[2][0] * matrix[3][1] - matrix[2][1] * matrix[3][0]));
	if (det == 0) {
		cout << "¬ведены некорректные координаты";		
	}
	else {
		a = da / det;
		b = db / det;
		c = dc / det;
		d = dd / det;
		a = a / 2.0;
		b = b / 2.0;
		c = c / 2.0;
		r = pow(a, 2) + pow(b, 2) + pow(c, 2) - d;
		cout << "”равнение сферы: " << abs(r) << " = (x - (" << -a << "))^2 + (y - (" << -b << "))^2 + (z - (" << -c << "))^2";
	}
	return 0;
}