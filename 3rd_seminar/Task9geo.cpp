#include <iostream>
#include <vector>
using namespace std;
double vectPr(int x1, int y1, int x2, int y2, int x3, int y3) {
	int pr = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);
	return pr;
}
int main() {
	setlocale(LC_ALL, "Russian");
	vector<int> arrx1;
	vector<int> arry1;
	vector<int> arrx2;
	vector<int> arry2;
	int n1, n2;
	int flag1 = 0, flag2 = 0;
	cout << "¬ведите количество вершин: ";
	cin >> n1;
	int value1, value2;
	for (int i = 0; i < n1; i++) {
		cout << "¬ведите координаты x вершины " << i + 1 << " : ";
		cin >> value1;
		cout << "¬ведите координаты y вершины " << i + 1 << " : ";
		cin >> value2;
		arrx1.push_back(value1);
		arry1.push_back(value2);
	}
	cout << "¬ведите количество вершин: ";
	cin >> n2;
	for (int i = 0; i < n2; i++) {
		cout << "¬ведите координаты x вершины " << i + 1 << " : ";
		cin >> value1;
		cout << "¬ведите координаты y вершины " << i + 1 << " : ";
		cin >> value2;
		arrx2.push_back(value1);
		arry2.push_back(value2);
	}
	for (int j = 0; j < n2; j++) {
		for (int i = 0; i < n1 - 1; i++) {
			int temp = vectPr(arrx1[i], arry1[i], arrx1[i + 1], arry1[i + 1], arrx2[j], arry2[j]);
			if (flag1 == 0 && temp > 0) {
				flag1 = 0;
			}
			else if (temp == 0) {
				flag1 = 1;
			}
			else {
				flag1 = 2;
			}
		}
		if (flag1 == 0 || flag1 == 1) {
			flag2 = 0;
			break;
		}
		else {
			flag1 = 0;
		}
	}
	switch (flag2) {
	case 0:
		cout << "ћногогранники пересекаютс€";
		break;
	case 1:
		cout << "ћногогранники не пересекаютс€";
		break;
	}
	return 0;
}