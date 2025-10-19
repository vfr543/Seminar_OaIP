#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	vector<int> a(30);
	vector<int> pic(30);
	cout << "¬ведите массив ";
	for (int i = 0; i < 30; i++) {
		cin >> a[i];
	}
	auto mx = max_element(a.begin(), a.end());
	auto mn = min_element(a.begin(), a.end());
	double sr = accumulate(a.begin(), a.end(), 0.0) / (a.size() * 1.0);
	int ob = accumulate(a.begin(), a.end(), 0.0);
	copy_if(a.begin(), a.end(), back_inserter(pic), [sr](int x) { return x > (sr * 1.2); });
	cout << "ќбщее потребление за мес€ц " << ob << endl;
	cout << "—реднесуточное значение " << sr << endl;
	cout << "ƒни с максимальным потреблением";
	for (int i = 0; i < a.size(); i++) { if (a[i] == *mx) { cout << ' ' << i + 1; } }
	cout << endl << "ƒни с минимальным потреблением";
	for (int i = 0; i < a.size(); i++) { if (a[i] == *mn) { cout << ' ' << i + 1; } }
	cout << endl;
	for (int x : pic) { if (x != 0){ cout << x << ' '; } }
	return 0;
}