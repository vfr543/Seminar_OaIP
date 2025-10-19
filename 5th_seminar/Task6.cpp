#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	vector<int> a(20);
	cout << "Ââåäèòå ìàññèâ " << endl;
	for (int i = 0; i < 20; i++) {
		cin >> a[i];
	}
	auto it = find(a.begin(), a.end(), 7);
	if (it != a.end()) { cout << "Åñòü ÷èñëî 7" << endl; } else { cout << "Íåò ÷èñëà 7" << endl; }
	sort(a.begin(), a.end());
	a.erase(unique(a.begin(), a.end()), a.end());
	for (int x : a) cout << x << ' ';
	return 0;
}
