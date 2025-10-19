#include <iostream>
#include <cstring>

using namespace std;

int countUniqueChars(char str[]) {
    int length = strlen(str);
    int uniqueCount = 0;

    for (int i = 0; i < length; i++) {
        bool isUnique = true;
        for (int j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            uniqueCount++;
        }
    }
    return uniqueCount;
}

void printUniqueChars(char str[]) {
    int length = strlen(str);
    cout << "Уникальные символы ";
    for (int i = 0; i < length; i++) {
        bool isf = true;
        for (int j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                isf = false;
                break;
            }
        }
        if (isf) {
            cout << str[i];
            if (i < length - 1) {
                cout << ", ";
            }
        }
    }
    cout << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");
    char input[256];
    cout << "Введите строку ";
    cin.getline(input, 256);
    int uniqueCount = countUniqueChars(input);
    cout << "Количество уникальных символов " << uniqueCount << endl;
    printUniqueChars(input);
    return 0;
}
