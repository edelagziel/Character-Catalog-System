#ifndef FILEREADER_H
#define FILEREADER_H

#include <fstream>
#include <cstring>

class FileReader {
public:
    FileReader(const char* filename);   //file Constractor
    ~FileReader();                      //file Distractour
    bool isOpen();                      //Chek if The File is already Open 
    char* getNextLine();                

private:
    std::ifstream file;             //ifstream its a class inside namspace std 
};

#endif
