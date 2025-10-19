#include <iostream>
#include <cstring>
using namespace std;
bool isunstr(char substrings[][256], int count, char str[], int start, int k) {
    for (int i = 0; i < count; i++) {
        bool match = true;
        for (int j = 0; j < k; j++) {
            if (substrings[i][j] != str[start + j]) {
                match = false;
                break;
            }
        }
        if (match) {
            return false;
        }
    }
    return true;
}
void unstr(char str[], int k) {
    int length = strlen(str);
    char uns[100][256];
    int uniqueCount = 0;

    if (k > length) {
        cout << "k больше длины строки" << endl;
        return;
    }

    if (k <= 0) {
        cout << "k должно быть положительным числом" << endl;
        return;
    }
    for (int i = 0; i <= length - k; i++) {
        if (isunstr(uns, uniqueCount, str, i, k)) {
            for (int j = 0; j < k; j++) {
                uns[uniqueCount][j] = str[i + j];
            }
            uns[uniqueCount][k] = '\0';
            for (int j = i; j < i + k; j++) {
                cout << str[j];
            }
            cout << endl;
            uniqueCount++;
        }
    }
    if (uniqueCount == 0) {
        cout << "Подстрок не найдено" << endl;
    }
}
int main() {
    setlocale(LC_ALL, "Russian");
    char str[256];
    int k;
    cout << "Введите строку ";
    cin.getline(str, 256);
    cout << "Введите k ";
    cin >> k;
    unstr(str, k);
    return 0;
}