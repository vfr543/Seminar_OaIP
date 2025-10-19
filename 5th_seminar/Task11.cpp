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
	a.erase(remove_if(a.begin(), a.end(), [](double x) { return x < 0.1;  }), a.end());
	cout << "Значения без шумов ";
	for (double x : a) { cout << x << ' '; }
	cout << endl;
	auto mx = max_element(a.begin(), a.end());
	double sr = accumulate(a.begin(), a.end(), 0.0) / (a.size() * 1.0);
	cout << "Среднее значение амплитуды " << sr << " Максимальное значение амплитуды " << *mx << endl;
	bool tmp = all_of(a.begin(), a.end(), [](double x) { return (x >= 0.5); });
	if (tmp) {
		cout << "Все значения превышают порог 0.5 " << endl;
	}
	else{
		cout << "Не все значения превышают порог 0.5 " << endl;
	}
	sort(a.begin(), a.end());
	cout << "10 наибольших амплитуд для анализа ";
	for_each(a.end() - 10, a.end(), [](double x) { cout << x << ' '; });
	
	return 0;
}
