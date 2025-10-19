#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	vector<int> a(20);
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dist(-100, 100);

	for (int i = 0; i < 20; i++) {
		a[i]=dist(gen);
		cout << a[i] << ' ';
	}
	cout << endl;
	a.erase(remove_if(a.begin(), a.end(), [](int x) {return x<0; }), a.end());
	for (int x : a) cout << x << ' ';
	return 0;
}
