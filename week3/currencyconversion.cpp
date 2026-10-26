#include <iostream>

int main(){
    double p, e;

    std::cout << "Enter amount in GBP." << std::endl;
    std::cin >> p;
    
    e = 1.18 * p;

    std::cout << p << " GBP" << " = " << e << " EUR" << std::endl;
}