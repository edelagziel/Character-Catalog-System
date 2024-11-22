# 🎮 C++ Linked List Assignment: The Ultimate Character Catalog System

## Introduction 😄

Hey, code champions! 🌟 Ready to embark on an epic quest combining your favorite classic TV shows with the power of C++? Imagine managing a universe where **Yu-Gi-Oh!**, **Ben 10**, **Pokémon**, **Dragon Ball**, **Digimon**, **Teenage Mutant Ninja Turtles**, and **Avatar: The Last Airbender** coexist! 🕺

Your mission (and yes, you should accept it, or the coding gods will frown upon you 😜) is to create a dynamic character catalog system using C++ linked lists. But wait, there's a plot twist! You'll be working with **two linked lists**: one for TV shows and another for the characters of each show. And because every hero needs a sidekick, we've prepared a file-reading class to help you along the way! So, gear up, summon your inner Saiyan, and let's dive into a world where coding meets nostalgia! 🎉

## Objectives 📚

- Implement **singly linked lists** from scratch in C++, working with multiple lists.
- Master dynamic memory allocation with pointers.
- Manipulate strings using `char*` (we're going retro, like floppy disks and dial-up internet! 🕰️).
- Read data from files and distribute it into the correct linked lists.
- Enhance your problem-solving skills while having a blast with beloved characters! 🎈

## Instructions 📝

### 1. Data Structures 🧩

- **Character Structure**:
  - Create a `Character` struct or class containing the following fields:
    - `char* name`: The name of the character.
    - `char* specialAbility`: A brief description of the character's special ability.
    - `int age`: The age of the character.

- **TV Show Structure**:
  - Create a `TVShow` struct or class containing:
    - `char* showName`: The name of the TV show (e.g., "Yu-Gi-Oh!", "Ben 10").
    - A linked list of `Character` nodes belonging to this show.
    - A pointer to the next `TVShow` node in the TV show linked list.

- **Linked List Implementation**:
  - Implement **two singly linked lists**:
    - One linked list for `TVShow` nodes.
    - Each `TVShow` node contains a linked list of `Character` nodes.

### 2. Program Requirements 🚀

- **Data Initialization**:
  - A text file named `characters.txt` containing **100 characters** is provided.
    - Each line in the file represents a character with fields separated by commas:
      ```
      ShowName,CharacterName,Age,SpecialAbility
      ```
      Example:
      ```
      Pokémon,Ash Ketchum,10,Pokémon Trainer
      ```
  - Your program should read from `characters.txt` and populate the TV show linked list.
    - If a TV show doesn't exist in your list yet, create a new `TVShow` node.
    - Add each character to the linked list of their respective TV show.

- **Menu-Driven Interface**:
  - The program should display a menu with the following options:
    1. **Display All TV Shows and Characters**: Show all TV shows and their characters.
    2. **Add a New Character**: Input character details and add to the correct TV show.
    3. **Delete a Character**: Remove a character by name from a TV show.
    4. **Search for a Character**: Find and display a character by name across all shows.
    5. **Sort Characters in a TV Show**: Sort characters of a specific TV show based on:
       - Name (alphabetically 🅰️)
       - Age (ascending ⬆️ or descending ⬇️)
    6. **Update Character Information**: Modify details of an existing character.
    7. **Exit**: Terminate the program after freeing all allocated memory.

- **User Input Validation**:
  - Ensure all user inputs are validated.
  - Handle incorrect inputs gracefully with appropriate error messages (because nobody likes a program that crashes like Team Rocket! 😜).

### 3. Provided Resources 📦

- **File Reading Class**:
  - We've provided a `FileReader` class to help you read from `characters.txt`.
    - The class includes methods to open the file, read lines, and parse the data.
    - You can use this class directly in your `main` function.
  - **Note**: Even though you're using the provided class, make sure to understand how it works!

- **characters.txt**:
  - A text file containing 100 characters from various TV shows.
  - Make sure this file is in the same directory as your executable when running the program.

### 4. Implementation Details 🔧

- **String Handling**:
  - Use `char*` for all strings.
  - Utilize C-style string functions (`strlen`, `strcpy`, `strcmp`, etc.).
  - Dynamically allocate memory for all `char*` fields.
  - Ensure no buffer overflows or memory leaks occur.

- **Memory Management**:
  - Properly manage memory allocation and deallocation.
  - Before exiting, free all allocated memory to prevent leaks (memory leaks are as pesky as Digletts in your garden! 🌱).

- **Modularity**:
  - Organize code into functions (e.g., `addCharacter`, `deleteCharacter`, `searchCharacter`, `readFromFile`, etc.).
  - Use header files for declarations if necessary.

- **Error Handling**:
  - Implement checks for null pointers and allocation failures.
  - Provide meaningful error messages to the user.

## Requirements 🛠️

- **Language and Tools**:
  - Use C++ for implementation.
  - Do not use STL containers or `std::string`.
  - Use only `char*` for strings.

- **Code Quality**:
  - Write clean, readable code with proper indentation.
  - Include comments explaining the logic and flow (comment like you're narrating an epic saga! 📖).

- **Compilation**:
  - Ensure the code compiles without errors or warnings.
  - Provide a makefile or detailed compilation instructions.

## Submission Guidelines 📤

- **Files to Submit**:
  - All source code files (`.cpp` and `.h`), including the `FileReader` class.
  - A makefile or detailed compilation instructions.

## Helpful Tips 💡

- **Dynamic Memory**:
  - Always check if memory allocation (`new`, `malloc`) was successful.
  - Match each allocation with a corresponding deallocation (`delete`, `free`).

- **String Operations**:
  - Be cautious with string lengths to prevent buffer overflows.
  - When copying strings, ensure the destination has enough space.

- **Resources**:
  - Refer to C++ documentation for syntax and functions.
  - Review lecture notes and textbooks on linked lists and dynamic memory.

## Conclusion 😎

You've made it to the end, coding warrior! 🏁 Now it's time to assemble the greatest crossover in programming history! May your code be as robust as an Omnitrix, as swift as a Poké Ball throw, and as powerful as a Super Saiyan! 💪

Remember, "With great power comes great responsibility," but in our case, it's "With great code comes less debugging!" 😂 So have fun, let your creativity flow, and may your programs compile on the first try (because that's rarer than finding a shiny Pokémon! ✨).

Happy coding, and may the source be with you! 🌌

---

# Provided `FileReader` Class

Below is a simple `FileReader` class you can use to read from `characters.txt`. Feel free to expand upon it or modify it as needed for your program.

**FileReader.h**

```cpp
#ifndef FILEREADER_H
#define FILEREADER_H

#include <fstream>
#include <cstring>

class FileReader {
public:
    FileReader(const char* filename);
    ~FileReader();
    bool isOpen();
    char* getNextLine();

private:
    std::ifstream file;
};

#endif
```