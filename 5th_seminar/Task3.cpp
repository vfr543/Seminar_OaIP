#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	vector<int> a(20);
	
	for (int i = 0; i < 20; i++) {
		a[i] = i + 1;
	}
	int n = a[0];
	auto max_it = max_element(a.begin(), a.end());
	cout << *max_it << endl;
	for_each(a.begin(), a.end(), [&n](int x) {if (x > n) { n = x; } return n; });
	cout << n;
	return 0;
}
