#include <iostream>
#include <vector>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int n, m, mx, mn;
	bool fl = true;
	cout << "¬ведите размер матрицы: ";
	cin >> n;
	cin >> m;
	vector<vector<int>> matrix(n ,vector<int>(m));
	vector<vector<int>> matrixst(2, vector<int>(m));
	vector<vector<int>> matrixstr(n, vector<int>(2));
	cout << "¬ведите матрицу: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> matrix[i][j];
		}
	}
    vector<int> row_min(n, INT_MAX);
    vector<int> row_max(n, INT_MIN);
    vector<int> col_min(m, INT_MAX);
    vector<int> col_max(m, INT_MIN);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] < row_min[i]) {
                row_min[i] = matrix[i][j];
            }
            if (matrix[i][j] > row_max[i]) {
                row_max[i] = matrix[i][j];
            }
        }
    }

    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            if (matrix[i][j] < col_min[j]) {
                col_min[j] = matrix[i][j];
            }
            if (matrix[i][j] > col_max[j]) {
                col_max[j] = matrix[i][j];
            }
        }
    }
    vector<pair<char, pair<int, pair<int, int>>>> results;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == row_min[i] && matrix[i][j] == col_max[j]) {
                results.push_back({ 'A', {matrix[i][j], {i + 1, j + 1}} });
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == row_max[i] && matrix[i][j] == col_min[j]) {
                results.push_back({ 'B', {matrix[i][j], {i + 1, j + 1}} });
            }
        }
    }
    if (results.empty()) {
        cout << "NONE" << endl;
    }
    else {
        for (const auto& result : results) {
            cout << result.first << " "
                << result.second.first << " "
                << result.second.second.first << " "
                << result.second.second.second << endl;
        }
    }

	return 0;
}