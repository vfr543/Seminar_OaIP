#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	vector<vector<double>> temp(5, vector<double>(30));
	vector<vector<double>> tempr(5, vector<double>(29));
	vector<double> tempsr(5);
	vector<vector<double>> tempsrind(5, vector<double>(2));
	vector<vector<double>> pressure(5, vector<double>(100));
	vector<vector<double>> pressurenorm(5, vector<double>(100));
	vector<vector<double>> pressurer(5, vector<double>(99));
	vector<vector<double>> pressurem(5, vector<double>(2));
	cout << "Введите значения 5 каналов температуры ";
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 30; j++) {
			cin >> temp[i][j];
		}
	}
	cout << "Введите значения 5 каналов давления ";
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 100; j++) {
			cin >> pressure[i][j];
		}
	}
	for (int i = 0; i < 5; i++) {
		tempsr[i] = accumulate(temp[i].begin(), temp[i].end(), 0) / 30.0;
		pressurem[i][0] = *min_element(pressure[i].begin(), pressure[i].end());
		pressurem[i][1] = *max_element(pressure[i].begin(), pressure[i].end());
		transform(temp[i].begin(), temp[i].end() - 1, temp[i].begin() + 1, tempr[i].begin(), [](double x , double y) { return y - x; });
		transform(pressure[i].begin(), pressure[i].end() - 1, pressure[i].begin() + 1, pressurer[i].begin(), [](double x, double y) { return y - x; });
		cout << "Средняя температура " << i+1 << " канала " << tempsr[i];
	}
	for (int x = 0; x < 5; x++) {
		cout << endl << "Минимальное давление " << x+1 << " канала " << pressurem[x][0] << endl << "Максимальное давление " << x+1 << " канала " << pressurem[x][1];
	}
	for (int x = 0; x < 5; x++) { 
		cout << endl << "Разности температуры " << x+1 << " канала ";
 		for_each(tempr[x].begin(), tempr[x].end(), [](double r) {cout << r << ' '; }); 
	}
	for (int x = 0; x < 5; x++) {
		cout << endl << "Разности давления " << x+1 << " канала ";
		for_each(pressurer[x].begin(), pressurer[x].end(), [](double r) {cout << r << ' '; });
	}
	cout << endl;
	double tmp = 0;
	double tmpch = 0;
	double mx;
	for (int i = 0; i < 5; i++) {
		mx = pressurem[i][1] - pressurem[i][0];
		if (mx > tmp) {
			tmp = mx;
			tmpch = i + 1;
		}
		transform(pressure[i].begin(), pressure[i].end(), pressurenorm[i].begin(), [pressurem,i](double x) { return (x - pressurem[i][0])/(pressurem[i][1]- pressurem[i][0]); });
		tempsrind[i][0] = tempsr[i];
		tempsrind[i][1] = i + 1;
	}
	cout << "Канал с наибольшей вариацией температуры " << tmpch << endl;
	for (int x = 0; x < 5; x++) {
		cout << endl << "Нормализованные значения давления " << x+1 << " канала ";
		for_each(pressurenorm[x].begin(), pressurenorm[x].end(), [](double r) { cout << r << ' '; });
	}
	for (int x = 0; x < 5; x++) {
		cout << endl << "Пики давления " << x+1 << " канала после нормализации ";
		for_each(pressurenorm[x].begin(), pressurenorm[x].end(), [](double r) { if (r > 0.9) { cout << r << ' '; }});
	}
	sort(tempsrind.begin(), tempsrind.end());
	cout << endl << "Канал с максимальной средней температурой " << tempsrind[4][1] << " Максимальная средняя температура " << tempsrind[4][0];
	
	return 0;
}
