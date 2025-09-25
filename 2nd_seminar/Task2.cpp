#include <iostream>
using namespace std;
int main() {
	int a, b, S;
	setlocale(LC_ALL, "Russian");
	cout << "Введите длину прямоугольника: ";
	cin >> a;
	cout << "Введите ширину прямоугольника: ";
	cin >> b;
	S = a * b;
	cout << endl << "Площадь прямоугольника: " << S << endl;
		return 0;
}