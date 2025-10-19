#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	vector<int> a(20);
	cout << "������� ������ ";
	for (int i = 0; i < 20; i++) {
		cin >> a[i];
	}
	a.erase(remove_if(a.begin(), a.end(), [](int x) { return x < 0;  }), a.end());
	cout << "��������� ��� ������ ";
	for (int x : a) { cout << x << ' '; }
	if (!a.empty()) {
		auto mx = max_element(a.begin(), a.end());
		auto mn = min_element(a.begin(), a.end());
		double sr = accumulate(a.begin(), a.end(), 0.0) / (a.size() * 1.0);
		cout << endl << "����������� �������� " << *mn << " ������������ �������� " << *mx << " ������� �������� " << sr << endl;

		bool tmp = all_of(a.begin(), a.end(), [](int x) { return (x <= 90 && x >= 10); });
		if (tmp) {
			cout << "��������� ������� �� ����� � �������� �� 10 �� 90 ���" << endl;
		}
		else {
			cout << "��������� ������� �� �� ����� � �������� �� 10 �� 90 ���" << endl;
		}
		sort(a.begin(), a.end());
		double median;
		if (a.size() % 2 == 0) {
			median = (a[a.size() / 2 - 1] + a[a.size() / 2]) / 2.0;
		}
		else {
			median = a[a.size() / 2];
		}
		cout << "��������������� �������� ";
		for (int x : a) { cout << x << ' '; }
		cout << endl << "������� " << median << endl;
	}
	else {
		cout << "��� ��������� ���� ����������";
	}
	
	return 0;
}