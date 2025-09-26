#include <iostream>
using namespace std;
int main() {
	int cm, m;
	setlocale(LC_ALL, "Russian");
	cout << "Введите длину в сантиметрах: ";
	cin >> cm;
	m = cm / 100;
	cm = cm - m * 100;
	cout << endl << "Длина: " << m << " метров " << cm << " сантиметров." << endl;
		return 0;

}
