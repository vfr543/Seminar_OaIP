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
	a.erase(remove_if(a.begin(), a.end(), [](double x) { return x < 0.1;  }), a.end());
	cout << "�������� ��� ����� ";
	for (double x : a) { cout << x << ' '; }
	cout << endl;
	auto mx = max_element(a.begin(), a.end());
	double sr = accumulate(a.begin(), a.end(), 0.0) / (a.size() * 1.0);
	cout << "������� �������� ��������� " << sr << " ������������ �������� ��������� " << *mx << endl;
	bool tmp = all_of(a.begin(), a.end(), [](double x) { return (x >= 0.5); });
	if (tmp) {
		cout << "��� �������� ��������� ����� 0.5 " << endl;
	}
	else{
		cout << "�� ��� �������� ��������� ����� 0.5 " << endl;
	}
	sort(a.begin(), a.end());
	cout << "10 ���������� �������� ��� ������� ";
	for_each(a.end() - 10, a.end(), [](double x) { cout << x << ' '; });
	
	return 0;
}