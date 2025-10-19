#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	vector<double> a(50);
	cout << "Введите массив ";
	for (int i = 0; i < 50; i++) {
		cin >> a[i];
	}
	auto mx = max_element(a.begin(), a.end());
	double mn = *min_element(a.begin(), a.end());
	cout << "Минимальный уровень топлива " << mn << endl;
	bool tmp = all_of(a.begin(), a.end(), [mx](double x) { return (x >= (*mx * 0.95)); });
	if (tmp) {
		cout << "Уровень топлива не падал ниже 5% от максимального" << endl;
	}
	else{
		cout << "Уровень топлива падал ниже 5% от максимального " << endl;
	}
	double sr = a[0]-a[49];
	cout << "Среднее потребление топлива " << sr << endl;
	sort(a.begin(), a.end());
	double median;
	if (a.size() % 2 == 0) {
		median = (a[a.size() / 2 - 1] + a[a.size() / 2]) / 2.0;
	}
	else {
		median = a[a.size() / 2];
	}
	for (double x : a) { cout << x << ' '; }
	cout << "Медиана " << median;
	
	return 0;
}
