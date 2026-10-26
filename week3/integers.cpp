#include <iostream>

int main(){ //main program
    int n, rem; // defines variables
    std::cout << "please enter a number" << std::endl; //outputs the question
    std::cin >> n; //prompts user to input value for n
    rem = n % 2; //assigns n/2 to rem
std::cout << "in the following line 0 means even and 1 means odd" << std::endl; //prints more text
std::cout << rem << std::endl; //prints the rem which tells us whether its odd or even
} //end