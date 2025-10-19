#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <random>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	vector<int> a(50);
	vector<int> bol120(50);
	cout << "Исходный массив ";
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dist(0, 180);
	for (int i = 0; i < 50; i++) {
		a[i] = dist(gen);
		cout << a[i] << ' ';
	}
	copy_if(a.begin(), a.end(), back_inserter(bol120), [](int x) { return x > 120; });
	cout << endl << "Отфильтрованные превышения скорости ";
	for (int x : bol120) if (x != 0) { cout << x << ' '; }
	cout << endl;
	double sr = accumulate(a.begin(), a.end(), 0.0) / 50.0;
	cout << "Среднее значение " << sr << endl;
	vector<int> sorta = a;
	sort(sorta.begin(), sorta.end());
	auto temp = find(sorta.begin(), sorta.end(), 0);
	if (temp != sorta.end()) { cout << "Автомобиль останавливался" << endl; } else{ cout << "Автомобиль не останавливался" << endl; }
	cout << "10 максимальных значений скорости " << endl;
	for_each(sorta.end() - 10 , sorta.end(), [](int x) { cout << x << ' '; });
	return 0;
}