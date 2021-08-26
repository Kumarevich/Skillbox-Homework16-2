#include <iostream>

float summation (int fractional, int integral) {
    int temp = fractional;
    int count = 0;
    while (temp != 0) {
        temp /= 10;
        ++count;
    }
    float result = integral + (fractional / pow(10.0f, count));
    return result;
}

int main() {
    int fracPart, integralPart;
    std::cout << "Input the integral part: ";
    std::cin >> integralPart;
    std::cout << "Input the fractional part: ";
    std::cin >> fracPart;
    std::cout << summation(fracPart, integralPart);
    return 0;
}
