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
	auto mx = max_element(a.begin(), a.end());
	double mn = *min_element(a.begin(), a.end());
	cout << "����������� ������� ������� " << mn << endl;
	bool tmp = all_of(a.begin(), a.end(), [mx](double x) { return (x >= (*mx * 0.95)); });
	if (tmp) {
		cout << "������� ������� �� ����� ���� 5% �� �������������" << endl;
	}
	else{
		cout << "������� ������� ����� ���� 5% �� ������������� " << endl;
	}
	double sr = a[0]-a[49];
	cout << "������� ����������� ������� " << sr << endl;
	sort(a.begin(), a.end());
	double median;
	if (a.size() % 2 == 0) {
		median = (a[a.size() / 2 - 1] + a[a.size() / 2]) / 2.0;
	}
	else {
		median = a[a.size() / 2];
	}
	for (double x : a) { cout << x << ' '; }
	cout << "������� " << median;
	
	return 0;
}