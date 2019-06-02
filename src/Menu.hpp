#ifndef MENU_H
#define MENU_H

#include <string>
#include <fstream>

class Menu {
private:
    std::ifstream m_File;
public:
    Menu(std::string);
    void Print();
};

#endif