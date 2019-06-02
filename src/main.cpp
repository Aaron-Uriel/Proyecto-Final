#include <iostream>
#include "Menu.hpp"

int main(int argc, char** argv) {
    Menu Obj(argv[1]);
    Obj.Print();
    return 0;
}