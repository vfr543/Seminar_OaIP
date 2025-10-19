#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
void extractWords(char str[]) {
    int length = strlen(str);
    bool inWord = false;
    for (int i = 0; i < length; i++) {
        if (isalnum(str[i])) {
            if (!inWord) {
                inWord = true;
            }
            cout << str[i];
        }
        else {
            if (inWord) {
                cout << endl;
                inWord = false;
            }
        }
    }
    if (inWord) {
        cout << endl;
    }
}
int main() {
    setlocale(LC_ALL, "Russian");
    char str[256];
    cout << "¬ведите строку ";
    cin.getline(str, 256);
    extractWords(str);
    return 0;
}