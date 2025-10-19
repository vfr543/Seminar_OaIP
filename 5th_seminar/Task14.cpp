#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	vector<vector<double>> a(24, vector <double> (2));
	vector<double> r(24);
	vector<double> r1(24);
	cout << "Введите массив ";
	for (int i = 0; i < 24; i++) {
		cin >> a[i][0];
		r[i] = a[i][0];
		a[i][1] = i * 1.0 + 1.0;
	}
	r.erase(remove_if(r.begin(), r.end(), [](double x) { return (x < 100 || x > 500);  }), r.end());
	a.erase(remove_if(a.begin(), a.end(), [](vector<double> x) { return (x[0] < 100 || x[0] > 500);  }), a.end());
	for (vector<double> x : a) { cout << x[0] << ' '; }
	double sr = accumulate(r.begin(), r.end(), 0.0) / (r.size() * 1.0);
	double sum = accumulate(r.begin(), r.end(), 0.0);
	cout << endl << "Суммарное потребление " << sum << " Среднее потребление " << sr << endl;
	auto mx = max_element(r.begin(), r.end());
	cout << "Часы пикового потребления ";
	for (vector<double> x : a) { if (x[0] == *mx) { cout << x[1] << ' '; } }
	transform(r.begin(), r.end(), r.begin(), [sr](double x) { return x - sr; });
	cout << endl << "Отклонения от среднего ";
	for (double x : r) { cout << x << ' '; }
	cout << endl << "Топ 5 минимальных часов потребления ";
	for (int i = 0; i < 5; i++) {
		cout << a[i][1] << ' ';
	}
	return 0;
}