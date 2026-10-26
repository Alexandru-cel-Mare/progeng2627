#include <iostream>
#include <string>

int main(){
    std::string user_name;
    std::string surname;
    std::cout << "Hey, what is your first name?" << std::endl;
    std::cin >> user_name;
    std::cout << "And what is your surname?" << std::endl;
    std::cin >> surname;
    std::cout << "Hello, " << user_name << " " << surname << "." << std::endl;
}