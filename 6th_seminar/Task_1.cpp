#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void longW(char str[]) {
    int maxLength = 0;
    int currentLength = 0;
    int longestStart = 0;
    int currentStart = 0;
    int length = strlen(str);
    for (int i = 0; i <= length; i++) {
        if (isalpha(str[i]) && str[i] != '\0') {
            if (currentLength == 0) {
            }
            currentLength++;
        }
        else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                longestStart = currentStart - maxLength;
            }
            currentLength = 0;
        }
        currentStart++;
    }
    if (maxLength > 0) {
        cout << "Самое длинное слово ";
        for (int i = longestStart; i < longestStart + maxLength; i++) {
            cout << str[i];
        }
    }
    else {
        cout << "В строке нет слов" << endl;
    }
}
int main() {
    setlocale(LC_ALL, "Russian");
    char input[256];
    cout << "Введите строку: ";
    cin.getline(input, 256);
    longW(input);
    return 0;
}
