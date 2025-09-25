#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	for (int i = 32; i < 127; i++) {
		cout << i << " - " << char(i) << endl;
	}
	return 0;
}