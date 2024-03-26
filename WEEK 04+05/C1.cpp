#include <iostream>
#include <cstring>
using namespace std;

bool doixung(const char* str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    const int maxLength = 100;
    char str[maxLength + 1];

    
    cin.getline(str, maxLength + 1);

    if (doixung(str)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
