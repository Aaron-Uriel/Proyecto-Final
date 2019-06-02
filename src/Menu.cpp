#include "Menu.hpp"
#include <iostream>
#include <cstdlib>

Menu::Menu(std::string Name): m_File(Name)
{
    if (!(m_File.is_open())) {
        std::cerr << "No se pudo abrir el archivo: " << Name << std::endl;
        std::cin.get();
        exit(1);
    }
}

void Menu::Print() {
    std::string Buffer;
    while (std::getline(m_File, Buffer)) {
        std::cout << Buffer << std::endl;
    }
}