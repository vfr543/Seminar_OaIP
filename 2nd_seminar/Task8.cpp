#include <iostream>
using namespace std;
bool glasn(char p) {
	bool r = 0;
	char mas[] = { 'A','E','I','O','U','Y','a','e','i','o','u','y' };
	for (int i = 0; i < 13; i++) {
		if (p == mas[i]) {
			r = 1;
			break;
		}
	}
	return r;
}
int main() {
	setlocale(LC_ALL, "Russian");
	int glas = 0;
	char a;
	bool temp = 0;
	cout << "Для выхода введите любой символ кроме букв." << endl;
	while (temp == 0) {
		cout << "Введите букву: ";
		cin >> a;
		int numa = a;
		if ((numa >= 65 && numa <= 90) || (numa >= 97 && numa <= 122)) {
			if (glasn(a)) {
				glas++;
			}
		}
		else {
			temp = 1;
		}
	}
	cout << endl << "Гласных в строке : " << glas << endl;
		return 0;

}
