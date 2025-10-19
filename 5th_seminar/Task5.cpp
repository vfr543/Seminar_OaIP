#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <random>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	vector<int> a(20);
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dist(-100, 100);
	cout << "����������� ������ " << endl;
	for (int i = 0; i < 20; i++) {
		a[i]=dist(gen);
		cout << a[i] << ' ';
	}
	cout << endl;
	cout << "������������ ������� " << *max_element(a.begin(), a.end()) << endl;
	cout << "����������� ������� " << *min_element(a.begin(), a.end()) << endl;
	double sr = accumulate(a.begin(), a.end(), 0.0) / 2.0;
	cout << "������� �������� " << sr << endl;
	sort(a.begin(), a.end());
	double med = accumulate(a.begin()+9, a.end()-9, 0.0) / 2.0;
	cout << "������� " << med << endl;
	cout << "��������������� ������ " << endl;
	for (int x : a) cout << x << ' ';
	return 0;
}