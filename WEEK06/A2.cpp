#include <iostream>

int factorial(int x) {
    std::cout << "x = " << x << " at " << &x << std::endl;

    if (x == 0) {
        return 1;
    } else {
        return x * factorial(x - 1);
    }
}

int main() {
    int N = 5;
    int result = factorial(N);

    std::cout << "Factorial of " << N << " is " << result << std::endl;

    return 0;
}
//Chuoi gia tri giam dan ve 0
// Dia chi cua bien x khong thay doi trong suot de quy, chi co gia tri cua x thay doi
