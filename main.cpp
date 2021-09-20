#include <iostream>
#include <string>

double summation (int fractional, int integral) {
    std::string full = std::to_string(integral);
    full += '.';
    full += std::to_string(fractional);
    return std::stod(full);
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
