#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	vector<int> a(20);
	cout << "Введите массив ";
	for (int i = 0; i < 20; i++) {
		cin >> a[i];
	}
	a.erase(remove_if(a.begin(), a.end(), [](int x) { return x < 0;  }), a.end());
	cout << "Измерения без ошибок ";
	for (int x : a) { cout << x << ' '; }
	if (!a.empty()) {
		auto mx = max_element(a.begin(), a.end());
		auto mn = min_element(a.begin(), a.end());
		double sr = accumulate(a.begin(), a.end(), 0.0) / (a.size() * 1.0);
		cout << endl << "Минимальная мощность " << *mn << " Максимальная мощность " << *mx << " Средняя мощность " << sr << endl;

		bool tmp = all_of(a.begin(), a.end(), [](int x) { return (x <= 90 && x >= 10); });
		if (tmp) {
			cout << "Двигатель работал всё время в пределах от 10 до 90 кВт" << endl;
		}
		else {
			cout << "Двигатель работал не всё время в пределах от 10 до 90 кВт" << endl;
		}
		sort(a.begin(), a.end());
		double median;
		if (a.size() % 2 == 0) {
			median = (a[a.size() / 2 - 1] + a[a.size() / 2]) / 2.0;
		}
		else {
			median = a[a.size() / 2];
		}
		cout << "Отсортированные значения ";
		for (int x : a) { cout << x << ' '; }
		cout << endl << "Медиана " << median << endl;
	}
	else {
		cout << "Все измерения были ошибочными";
	}
	
	return 0;
}
