#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
void countVowelsAndConsonants(char str[]) {
    int vowels = 0;
    int consonants = 0;
    const char vowelChars[] = "AEIOUY";
    for (int i = 0; str[i] != '\0'; i++) {
        char currentChar = toupper(str[i]);
        if (isalpha(str[i])) {
            bool isVowel = false;
            for (int j = 0; vowelChars[j] != '\0'; j++) {
                if (currentChar == vowelChars[j]) {
                    isVowel = true;
                    break;
                }
            }
            if (isVowel) {
                vowels++;
            }
            else {
                consonants++;
            }
        }
    }
    cout << "Гласных " << vowels << endl;
    cout << "Согласных " << consonants << endl;
}
int main() {
    setlocale(LC_ALL, "Russian");
    char input[256];
    cout << "Введите строку ";
    cin.getline(input, 256);
    countVowelsAndConsonants(input);
    return 0;
}