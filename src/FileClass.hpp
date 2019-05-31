#ifndef FILECLASS
#define FILECLASS

#include <fstream>
#include <string>

class FileClass {
private:
    std::fstream File;
public:
    FileClass(std::string Name);
};

#endif