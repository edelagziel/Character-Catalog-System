#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "FileReader.h"

// Define your Character and TVShow structures here

int main() {
    FileReader reader("characters.txt");
    if (!reader.isOpen()) {
        printf("Failed to open characters.txt\n");
        return 1;
    }

    char* line;
    while ((line = reader.getNextLine()) != NULL) {
        // Parse the line
        // Expected format: ShowName,CharacterName,Age,SpecialAbility
        char* token = strtok(line, ",");
        if (token == NULL) continue;

        // Allocate and copy showName
        char* showName = (char*)malloc(strlen(token) + 1);
        strcpy(showName, token);

        token = strtok(NULL, ",");
        if (token == NULL) continue;

        // Allocate and copy characterName
        char* characterName = (char*)malloc(strlen(token) + 1);
        strcpy(characterName, token);

        token = strtok(NULL, ",");
        if (token == NULL) continue;

        int age = atoi(token);

        token = strtok(NULL, ",");
        if (token == NULL) continue;

        // Allocate and copy specialAbility
        char* specialAbility = (char*)malloc(strlen(token) + 1);
        strcpy(specialAbility, token);

        // Now you have showName, characterName, age, specialAbility
        // TODO: Add the character to the appropriate TVShow linked list
        // Remember to free showName, characterName, and specialAbility when done

        // For demonstration purposes, let's just print them
        printf("Show: %s, Character: %s, Age: %d, Ability: %s\n", showName, characterName, age, specialAbility);

        // Don't forget to free the allocated memory
        free(showName);
        free(characterName);
        free(specialAbility);
    }

    return 0;
}
