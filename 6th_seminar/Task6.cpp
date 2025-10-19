#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
void caesarCipher(char text[], int shift) {
    shift = shift % 26;
    if (shift < 0) {
        shift += 26;
    }
    for (int i = 0; text[i] != '\0'; i++) {
        if (isupper(text[i])) {
            text[i] = (text[i] - 'A' + shift) % 26 + 'A';
        }
        else if (islower(text[i])) {
            text[i] = (text[i] - 'a' + shift) % 26 + 'a';
        }
    }
}
int main() {
    setlocale(LC_ALL, "Russian");
    char text[256];
    int shift;
    cout << "Введите текст ";
    cin.getline(text, 256);
    cout << "Введите сдвиг ";
    cin >> shift;
    caesarCipher(text, shift);
    cout << "Зашифрованный текст " << text << endl;

    return 0;
}