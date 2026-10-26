#include <iostream>

int main(){

    double input, average, sum = 0;
    int n = 0;

    std::cin >> input;

while(input != 0){

    sum = sum + input;
    n = n + 1;
    average = sum / n;
    std::cout << "the average so far is:" << " " << average << std::endl;
    std::cout << "enter a number:" << std::endl;
    std::cin >> input; 

    }
}