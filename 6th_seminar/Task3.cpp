#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void rem(char str[]) {
    int writeIndex = 0;
    int readIndex = 0;
    while (str[readIndex] != '\0') {
        if (!isdigit(str[readIndex])) {
            str[writeIndex] = str[readIndex];
            writeIndex++;
        }
        readIndex++;
    }
    str[writeIndex] = '\0';
}

int main() {
    setlocale(LC_ALL, "Russian");
    char input[256];
    cout << "Введите строку ";
    cin.getline(input, 256);
    rem(input);
    cout << "Строка без цифр " << input << endl;
    return 0;
}