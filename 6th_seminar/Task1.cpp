#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
bool isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;
    while (left < right) {
        while (left < right && str[left] == ' ') {
            left++;
        }
        while (left < right && str[right] == ' ') {
            right--;
        }
        if (tolower(str[left]) != tolower(str[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main() {
	setlocale(LC_ALL, "Russian");
	char str[100];
	cout << "Введите строку: ";
	cin.getline(str, 100);
	if (isPalindrome(str)) {
		cout << "Это палиндром." << std::endl;
	}
	else {
		cout << "Это не палиндром." << std::endl;
	}
	return 0;
}