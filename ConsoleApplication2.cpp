
#include <iostream>
#include <stdint.h>
#include <string>



int main()
{
    std::cout << "enter your name : ";
    std::string name;
    std::getline ( std::cin, name );


    std::cout << "enter your age : ";
    std::string age;
    std::getline(std::cin, age);

    std::cout << name << " " << age << "\n";

    std::cout << name. length() << "\n";
    std::cout << age. length() << "\n";

    std::cout << char (name.front()) << " " << char (age.back()) << std::endl;


    
}

