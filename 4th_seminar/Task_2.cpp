#include <iostream>
#include <vector>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	bool fl = true;
	cout << "¬ведите размер матрицы: ";
	cin >> n;
	vector<vector<int>> matrix(n ,vector<int>(n));
	cout << "¬ведите матрицу: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}
	vector<int> sum(2 * n + 2);
		for (int i = 0; i < n; i++) {
			sum[0] += matrix[i][i];
			sum[1] += matrix[i][n - i - 1];
		}
	int r = 2;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
				sum[r] += matrix[i][j];
				sum[r+1] += matrix[j][i];
		}
		r+=2;
	}
	for (int i = 0; i < 2*n+2; i++) {
		if (sum[0] != sum[i]) {
			fl = false;
			
		}
	}
	if (fl) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}