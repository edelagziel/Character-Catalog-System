// FileReader.cpp
#include "FileReader.h"
#include <cstdio>
#include <cstring>

FileReader::FileReader(const char* filename) {
    file = fopen(filename, "r");
}

FileReader::~FileReader() {
    if (file != NULL) {
        fclose(file);
    }
}

bool FileReader::isOpen() {
    return file != NULL;
}

char* FileReader::getNextLine() {
    if (file == NULL || fgets(buffer, sizeof(buffer), file) == NULL) {
        return NULL;
    }
    // Remove newline character
    buffer[strcspn(buffer, "\n")] = 0;
    return buffer;
}
