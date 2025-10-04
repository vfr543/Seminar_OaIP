#include <iostream>
#include <vector>
using namespace std;
double vectPr(int x1, int y1, int x2, int y2, int x3, int y3) {
	int pr = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);
	return pr;
}
int main() {
	setlocale(LC_ALL, "Russian");
	vector<int> arrx;
	vector<int> arry;
	int x1, y1, n;
	int flag = 0;
	cout << "������� ���������� ������: ";
	cin >> n;
	int value1, value2;
	for (int i = 0; i < n; i++) {
		cout << "������� ���������� x ������� " << i + 1 << " : ";
		cin >> value1;
		cout << "������� ���������� y ������� " << i + 1 << " : ";
		cin >> value2;
		arrx.push_back(value1);
		arry.push_back(value2);
	}
	cout << "������� ���������� x �����: ";
	cin >> x1;
	cout << "������� ���������� y �����: ";
	cin >> y1;
	for (int i = 0; i < n - 1; i++) {
		int temp = vectPr(arrx[i], arry[i], arrx[i + 1], arry[i + 1], x1, y1);
		if (flag == 0 && temp > 0) {
			flag = 0;
		}
		else if (temp == 0) {
			flag = 1;
		}
		else {
			flag = 2;
		}
	}
	switch (flag) {
	case 0:
		cout << "����� ����� � �������������";
		break;
	case 1:
		cout << "����� ����� � �������������";
		break;
	case 2:
		cout << "����� �� ����� � �������������";
		break;
	}
	return 0;
}