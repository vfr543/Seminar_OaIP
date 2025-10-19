#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
void lstr(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int** dp = new int* [len1 + 1];
    for (int i = 0; i <= len1; i++) {
        dp[i] = new int[len2 + 1]();
    }
    int maxLength = 0;
    int endPos = 0;
    for (int i = 1; i <= len1; i++) {
        for (int j = 1; j <= len2; j++) {
            if (str1[i - 1] == str2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                if (dp[i][j] > maxLength) {
                    maxLength = dp[i][j];
                    endPos = i - 1;
                }
            }
            else {
                dp[i][j] = 0;
            }
        }
    }
    if (maxLength == 0) {
        cout << "Общих подстрок не найдено" << endl;
    }
    else {
        cout << "Наибольшая общая подстрока ";
        for (int i = endPos - maxLength + 1; i <= endPos; i++) {
            cout << str1[i];
        }
    }
    for (int i = 0; i <= len1; i++) {
        delete[] dp[i];
    }
    delete[] dp;
}
int main() {
    setlocale(LC_ALL, "Russian");
    char str1[256];
    char str2[256];
    cout << "Введите первую строку ";
    cin.getline(str1, 256);
    cout << "Введите вторую строку ";
    cin.getline(str2, 256);
    lstr(str1, str2);
    return 0;
}
