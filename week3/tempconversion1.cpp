#include <iostream>
#include <string>

int main(){

    double temp_in, temp_out;
    std::string unit_in, unit_out;

    std::cin >> temp_in >> unit_in;

    if (unit_in == "F"){
        unit_out = "C";
        temp_out = (temp_in - 32) * (0.555555555555556);
        std::cout << temp_out << " " << unit_out << std::endl;
    }
    else if (unit_in == "C"){
        unit_out = "F";
        temp_out = (temp_in * 1.8) + (32);
        std::cout << temp_out << " " << unit_out << std::endl;
    }
    else{
        std::cout << "error, unit not recognised" << std::endl;
    }

}