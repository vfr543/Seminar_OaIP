#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	vector<double> a(50);
	cout << "������� ������ ";
	for (int i = 0; i < 50; i++) {
		cin >> a[i];
	}
	a.erase(remove_if(a.begin(), a.end(), [](double x) { return (x < 0 || x > 12);  }), a.end());
	for (double x : a) { cout << x << ' '; }
	double sr = accumulate(a.begin(), a.end(), 0.0) / (a.size() * 1.0);
	cout << endl << "������� �������� " << sr << endl;
	auto mx = max_element(a.begin(), a.end());
	auto mn = min_element(a.begin(), a.end());
	cout << "������������ �������� " << *mx << " ����������� �������� " << *mn << endl;
	cout << "��������, ����������� 8 ���" << endl;
	for_each(a.end() - 10, a.end(), [](double x) { if (x > 8) { cout << x << ' '; } });
	return 0;
}