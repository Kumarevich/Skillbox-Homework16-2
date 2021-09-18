#include <iostream>
#include <string>

float summation (int fractional, int integral) {
    std::string frac = std::to_string(fractional);
    float result = integral + (fractional / pow(10.0f, frac.length()));
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
