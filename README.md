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

#### Menu-Driven Interface 🎛️

Your program should present a user-friendly menu that allows users to perform various operations. Below are the menu options, organized for clarity:

1. **Display All TV Shows and Characters**

   - **Description**: Show all TV shows in your catalog along with their respective characters.
   - **Action**:
     - List each TV show.
     - Under each TV show, display all characters belonging to it.

2. **Add a New Character**

   - **Description**: Input details of a new character and add them to the appropriate TV show.
   - **Action**:
     - Prompt the user for:
       - **TV Show Name**
       - **Character Name**
       - **Age**
       - **Special Ability**
     - **If the TV show does not exist**:
       - Create a new `TVShow` node and add it to the TV show linked list.
     - Add the new character to the linked list of the specified TV show.

3. **Delete a Character**

   - **Description**: Remove a character by name from a TV show.
   - **Action**:
     - Prompt the user for the **Character Name** to delete.
     - Search across all TV shows to find the character.
     - **If found**:
       - Remove the character from the character linked list of the corresponding TV show.
     - **If not found**:
       - Display an appropriate message indicating the character was not found.

4. **Search for a Character**

   - **Description**: Find and display a character by name across all TV shows.
   - **Action**:
     - Prompt the user for the **Character Name** to search.
     - Search through all TV shows and their character lists.
     - **If found**:
       - Display the character's details:
         - TV Show Name
         - Character Name
         - Age
         - Special Ability
     - **If not found**:
       - Display an appropriate message indicating the character was not found.

5. **Sort Characters in a TV Show**

   - **Description**: Rearrange and update the character list of a specific TV show based on a chosen sorting criterion.
   - **Action**:
     - Prompt the user for the **TV Show Name**.
     - **If the TV show exists**:
       - Ask the user to choose a sorting criterion:
         1. **Sort by Name** (Alphabetically 🅰️)
         2. **Sort by Age**:
            - **Ascending Order** (⬆️)
            - **Descending Order** (⬇️)
       - Perform the sorting by rearranging the character linked list of the specified TV show.
       - **Display** the sorted list of characters for that TV show.
     - **If the TV show does not exist**:
       - Display an appropriate message indicating the TV show was not found.

6. **Update Character Information**

   - **Description**: Modify the details of an existing character.
   - **Action**:
     - Prompt the user for the **Character Name** to update.
     - Search through all TV shows to find the character.
     - **If found**:
       - Inform the user that the character's **name cannot be changed**, as it is used to identify the character.
       - Allow the user to update one or both of the following fields:
         - **Age**
         - **Special Ability**
       - Prompt the user for the new value(s) and update the character's information.
     - **If not found**:
       - Display an appropriate message indicating the character was not found.

7. **Exit**

   - **Description**: Terminate the program safely.
   - **Action**:
     - Before exiting, ensure all dynamically allocated memory is properly freed to prevent memory leaks.
     - Display a farewell message (optional) and terminate the program.

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

- **String Duplication**:
  - Do **not** use `strdup` or any non-standard string duplication functions.
  - When copying strings, manually allocate memory using `malloc` or `new`, and use `strcpy` or similar functions to copy the content.
  - Ensure you properly allocate and deallocate memory to prevent leaks.

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
