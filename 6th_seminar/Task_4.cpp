#include <iostream>
#include <cstring>
#include <cctype>
#include <algorithm>
using namespace std;
bool areAnagrams(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2) {
        return false;
    }
    char copy1[256], copy2[256];
    strcpy_s(copy1, 256, str1);
    strcpy_s(copy2, 256, str2);
    for (int i = 0; i < len1; i++) {
        copy1[i] = tolower(copy1[i]);
        copy2[i] = tolower(copy2[i]);
    }
    sort(copy1, copy1 + len1);
    sort(copy2, copy2 + len2);
    for (int i = 0; i < len1; i++) {
        if (copy1[i] != copy2[i]) {
            return false;
        }
    }
    return true;
}
int main() {
    setlocale(LC_ALL, "Russian");
    char str1[256], str2[256];
    cout << "Введите первую строку: ";
    cin.getline(str1, 256);
    cout << "Введите вторую строку: ";
    cin.getline(str2, 256);
    if (areAnagrams(str1, str2)) {
        cout << "Да" << endl;
    }
    else {
        cout << "Нет" << endl;
    }
    return 0;
}
