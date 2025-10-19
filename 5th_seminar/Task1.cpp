#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	vector<int> a(10);
	for (int i = 0; i < 10; i++) {
		a[i] = i + 1;
	}
	for_each(a.begin(), a.end(), [](int x) { cout << x << ' '; });

	return 0;
}
