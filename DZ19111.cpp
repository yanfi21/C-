#include <iostream>

int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    std::cout << "Введите номер числа Фибоначчи: ";
    std::cin >> n;
    std::cout << "Число Фибоначчи для n = " << n << " равно " << fibonacci(n) << std::endl;
    return 0;
}
