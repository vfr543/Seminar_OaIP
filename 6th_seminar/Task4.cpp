#include <iostream>
#include <cstring>
using namespace std;
bool containsAllChars(char A[], char B[]) {
    int lenA = strlen(A);
    int lenB = strlen(B);
    for (int i = 0; i < lenB; i++) {
        bool found = false;
        char currentChar = B[i];
        for (int j = 0; j < lenA; j++) {
            if (A[j] == currentChar) {
                found = true;
                break;
            }
        }
        if (!found) {
            return false;
        }
    }
    return true;
}
int main() {
    setlocale(LC_ALL, "Russian");
    char A[256];
    char B[256];
    cout << "������� ������ A: ";
    cin.getline(A, 256);
    cout << "������� ������ B: ";
    cin.getline(B, 256);
    if (containsAllChars(A, B)) {
        cout << "��" << endl;
    }
    else {
        cout << "���" << endl;
    }
    return 0;
}