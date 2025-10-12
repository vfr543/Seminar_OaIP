#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double M_PI=3.1415926535;
	setlocale(LC_ALL, "Russian");
	int x, y, theta;
	cout << "Введите координаты точки: " << endl;
	cin >> x >> y;
	cout << "Введите угол поворота: ";
	cin >> theta;
	double theta_r = theta * M_PI / 180.0;
	double x_n = cos(theta_r) * x + sin(theta_r) * y;
	double y_n = -sin(theta_r) * x + cos(theta_r) * y;
	cout << "Новые координаты точек: " << x_n << " " << y_n << endl;
	return 0;
}