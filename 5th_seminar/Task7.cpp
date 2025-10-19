#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	vector<double> a(10);
	cout << "������� ������ " << endl;
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	a.erase(remove_if(a.begin(), a.end(), [](int x) {return x < -50 or x>50; }), a.end());
	for (int x : a) cout << x << ' ';
	cout << endl;
	double sr = accumulate(a.begin(), a.end(), 0.0) / 2.0;
	cout << "������� �������� " << sr << endl;
	cout << "������������ ������� " << *max_element(a.begin(), a.end()) << endl;
	cout << "����������� ������� " << *min_element(a.begin(), a.end()) << endl;
	auto t = find_if(a.begin(), a.end(), [](int x) {return x <= -10; });
	if (t != a.end()) { cout << "�� ��� ����������� ��������� -10 ��������"; } else { cout << "��� ����������� ��������� -10 ��������"; }
	return 0;
}