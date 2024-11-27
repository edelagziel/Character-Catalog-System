#include "FileReader.h"
#include <string>
#include <iostream>
#include<fstream>

/// @brief 
/// @param filename Consractur will open file and make sure the file name will not be chnge
FileReader::FileReader(const char* filename) {          
    file.open(filename);                        //File Is Member Frind of the Class look in h file 
}

FileReader::~FileReader() {
    if (file.is_open()) {
        file.close();
    }
}

bool FileReader::isOpen() {
    return file.is_open();
}

char* FileReader::getNextLine() {
    if (!file.is_open()) {
        return NULL;
    }

    std::string line;
    if (std::getline(file, line)) {
        // Convert std::string to char*
        char* cstr = new char[line.length() + 1];
        std::strcpy(cstr, line.c_str());
        return cstr;
    } else {
        return NULL;
    }
}
