#include <iostream>
using namespace std;
int main() {
	int cm, m;
	setlocale(LC_ALL, "Russian");
	cout << "¬ведите длину в сантиметрах: ";
	cin >> cm;
	m = cm / 100;
	cm = cm - m * 100;
	cout << endl << "ƒлинна: " << m << " метров " << cm << " сантиметров." << endl;
		return 0;
}