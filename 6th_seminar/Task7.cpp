#include <iostream>
#include <cstring>
using namespace std;
void compressRLE(char input[], char output[]) {
    int inputLen = strlen(input);
    int outputIndex = 0;
    int i = 0;
    while (i < inputLen) {
        char currentChar = input[i];
        int count = 1;
        while (i + count < inputLen && input[i + count] == currentChar) {
            count++;
        }
        output[outputIndex++] = currentChar;
        if (count > 9) {
            char countStr[10];
            int numDigits = 0;
            int temp = count;
            while (temp > 0) {
                numDigits++;
                temp /= 10;
            }
            temp = count;
            for (int j = numDigits - 1; j >= 0; j--) {
                output[outputIndex + j] = '0' + (temp % 10);
                temp /= 10;
            }
            outputIndex += numDigits;
        }
        else {
            output[outputIndex++] = '0' + count;
        }
        i += count;
    }
    output[outputIndex] = '\0';
}
int main() {
    setlocale(LC_ALL, "Russian");
    char input[256];
    char output[512];
    cout << "¬ведите строку дл€ сжати€ ";
    cin.getline(input, 256);
    compressRLE(input, output);
    cout << "—жата€ строка " << output << endl;
    return 0;
}