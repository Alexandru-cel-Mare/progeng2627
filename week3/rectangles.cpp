#include <iostream>

int main(){
    double L, W, P, A;

    std::cout << "Enter length." << std::endl;
    std::cin >> L;
    std::cout << "Enter width." << std::endl;
    std::cin >> W;

    P = L + L + W + W;
    A = L * W;

    std::cout << "Perimeter = " << P << std::endl;
    std::cout << "Area = " << A << std::endl;
}