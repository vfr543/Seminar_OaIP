#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
void correctCase(char text[]) {
    int length = strlen(text);
    bool newSentence = true;
    for (int i = 0; i < length; i++) {
        if (newSentence && isalpha(text[i])) {
            text[i] = toupper(text[i]);
            newSentence = false;
        }
        else if (!newSentence && isalpha(text[i])) {
            text[i] = tolower(text[i]);
        }
        if (text[i] == '.' || text[i] == '!' || text[i] == '?') {
            newSentence = true;
        }
    }
}
int main() {
    setlocale(LC_ALL, "Russian");
    char text[256];
    cout << "¬ведите текст ";
    cin.getline(text, 256);
    correctCase(text);
    cout << "»справленный текст " << text << endl;
    return 0;
}