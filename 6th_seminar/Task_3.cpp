#include <iostream>
#include <cstring>
using namespace std;
void replaceSubstring(char str[], const char oldSub[], const char newSub[]) {
    int strLen = strlen(str);
    int oldLen = strlen(oldSub);
    int newLen = strlen(newSub);
    char result[1024] = "";
    int resultIndex = 0;
    for (int i = 0; i < strLen; ) {
        bool found = true;
        for (int j = 0; j < oldLen; j++) {
            if (i + j >= strLen || str[i + j] != oldSub[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            for (int j = 0; j < newLen; j++) {
                result[resultIndex++] = newSub[j];
            }
            i += oldLen;
        }
        else {
            result[resultIndex++] = str[i];
            i++;
        }
    }
    result[resultIndex] = '\0';
    strcpy_s(str, 256, result);
}
int main() {
    setlocale(LC_ALL, "Russian");
    char str[256];
    char oldSub[256];
    char newSub[256];
    cout << "Введите строку ";
    cin.getline(str, 256);
    cout << "Введите подстроку для замены ";
    cin.getline(oldSub, 256);
    cout << "Введите новую подстроку ";
    cin.getline(newSub, 256);
    replaceSubstring(str, oldSub, newSub);
    cout << str << endl;
    return 0;
}
