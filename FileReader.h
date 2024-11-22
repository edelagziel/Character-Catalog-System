// FileReader.h
#ifndef FILEREADER_H
#define FILEREADER_H
#include <cstdio>

class FileReader {
public:
    FileReader(const char* filename);
    ~FileReader();
    bool isOpen();
    char* getNextLine();

private:
    FILE* file;
    char buffer[256]; // Adjust size as needed
};

#endif
