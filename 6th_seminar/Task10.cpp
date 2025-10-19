#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
void rev(char text[]) {
    int length = strlen(text);
    int start = 0;
    for (int i = 0; i <= length; i++) {
        if (text[i] == ' ' || text[i] == '\0') {
            reverse(text + start, text + i);
            start = i + 1;
        }
    }
}
int main() {
    setlocale(LC_ALL, "Russian");
    char text[256];
    cout << "Введите предложение ";
    cin.getline(text, 256);
    rev(text);
    cout << text << endl;
    return 0;
}
