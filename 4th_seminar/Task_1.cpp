#include <iostream>
#include <vector>
using namespace std;
bool eq(vector<vector<int>> a, vector<vector<int>> b, int n) {
	bool fl = true;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] != b[i][j]) {
				fl = false;
				break;
			}
		}
	}
	if (fl) {
		return true;
	}
	else {
		return false;
	}
}
int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите размер матрицы: ";
	cin >> n;
	vector<vector<int>> matrix(n ,vector<int>(n));
	cout << "Введите матрицу: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}
	vector<vector<int>> matrix1(n, vector<int>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			matrix1[j][i] = matrix[i][j];
		}
	}
	vector<vector<int>> matrix2(n, vector<int>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			matrix2[j][i] = matrix[n-i-1][n-j-1];
		}
	}
	vector<vector<int>> matrix3(n, vector<int>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			matrix3[i][j] = matrix[n-i-1][j];
		}
	}
	vector<vector<int>> matrix4(n, vector<int>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			matrix4[i][j] = matrix[i][n-j-1];
		}
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << matrix1[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << matrix2[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << matrix3[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << matrix4[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	vector<vector<vector<int>>> matrices = { matrix1, matrix2, matrix3, matrix4 };
	vector<pair<int, int>> equalPairs;
	for (int i = 0; i < 4; i++) {
		for (int j = i + 1; j < 4; j++) {
			if (eq(matrices[i], matrices[j],n)) {
				equalPairs.push_back({ i + 1, j + 1 });
			}
		}
	}
	if (equalPairs.empty()) {
		cout << "NONE" << endl;
	}
	else {
		for (const auto& pair : equalPairs) {
			cout << "(" << pair.first << ", " << pair.second << ")" << endl;
		}
	}
	return 0;
}
