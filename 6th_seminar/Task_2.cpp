#include <iostream>
#include <cstring>
using namespace std;
void rem(char str[], char ch) {
    int writeIndex = 0;
    int readIndex = 0;
    while (str[readIndex] != '\0') {
        if (str[readIndex] != ch) {
            str[writeIndex] = str[readIndex];
            writeIndex++;
        }
        readIndex++;
    }
    str[writeIndex] = '\0';
}

int main() {
    setlocale(LC_ALL, "Russian");
    char str[256];
    char ch;
    cout << "Введите строку ";
    cin.getline(str, 256);
    cout << "Введите символ для удаления ";
    cin >> ch;
    rem(str, ch);
    cout << str << endl;
    return 0;
}
