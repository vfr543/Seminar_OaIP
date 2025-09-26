#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n, count = 0;
	setlocale(LC_ALL, "Russian");
	cout << "Введите число: ";
	cin >> n;
	while (n > count) {
		count++;
		cout << pow(count, 2) << endl;
	}
		return 0;

}
