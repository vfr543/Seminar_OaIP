#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	vector<double> a(10);
	cout << "Введите массив " << endl;
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	a.erase(remove_if(a.begin(), a.end(), [](int x) {return x < -50 or x>50; }), a.end());
	for (int x : a) cout << x << ' ';
	cout << endl;
	double sr = accumulate(a.begin(), a.end(), 0.0) / 2.0;
	cout << "Среднее значение " << sr << endl;
	cout << "Максимальный элемент " << *max_element(a.begin(), a.end()) << endl;
	cout << "Минимальный элемент " << *min_element(a.begin(), a.end()) << endl;
	auto t = find_if(a.begin(), a.end(), [](int x) {return x <= -10; });
	if (t != a.end()) { cout << "Не все температуры превышают -10 градусов"; } else { cout << "Все температуры превышают -10 градусов"; }
	return 0;
}