#include <iostream>

int main(){
    double input;
    double x = 0;
    std::cin >> input;
while(input != 0){
    x = x + input;
    std::cout << "the sum so far is:" << x << std::endl;
    std::cout << "enter a number:" << std::endl;
    std::cin >> input;
    }
}