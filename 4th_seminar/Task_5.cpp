#include <iostream>
#include <vector>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
    int N, M;
	cout << "¬ведите размер матрицы: ";
	cin >> N >> M;
	vector<vector<int>> matrix(N ,vector<int>(M));
	cout << "¬ведите матрицу: " << endl;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> matrix[i][j];
		}
	}
    int top = 0, bottom = N - 1;
    int left = 0, right = M - 1;

    while (top <= bottom && left <= right) {
        for (int j = left; j <= right; j++) {
            cout << matrix[top][j] << " ";
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            cout << matrix[i][right] << " ";
        }
        right--;

        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                cout << matrix[bottom][j] << " ";
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << matrix[i][left] << " ";
            }
            left++;
        }
    }
	
	return 0;
}