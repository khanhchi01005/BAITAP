#include <iostream>
#include <string>
using namespace std;

bool doixung(int num) {
    string str = to_string(num);
    int length = str.length();
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return false;
        }
    }
    return true;
}

int demsodoixung(int A, int B) {
    int count = 0;
    for (int num = A; num <= B; num++) {
        if (doixung(num)) {
            count++;
        }
    }
    return count;
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int A, B;
        cin >> A >> B;
        int result = demsodoixung(A, B);
        cout << result << endl;
    }

    return 0;
}
