#include <iostream>
#include <cstdlib>
#include <cstring>
#include "FileReader.h"
#include"TvShowList.hpp"

//eden lagziel and Avner michlie


enum UserOpsions
{
    Display=1,
    AddCharacter,
    DeleteCharacter,
    SearchCharacter,
    SortCharacter,
    UpdateCharacter,
    ExitProgram
};

int main() {
    FileReader reader("characters.txt");
    if (!reader.isOpen()) {
        std::cout << "Failed to open characters.txt" << std::endl;
        return 1;
    }

    char* line;
    TvShowList NewTvShowList ;//Create new List For Tv Show
    while ((line = reader.getNextLine()) != NULL) {
        // Parse the line
        // Expected format: ShowName,CharacterName,Age,SpecialAbility
        char* token = strtok(line, ",");
        if (token == NULL) {
            delete[] line;
            continue;
        }

        // Allocate and copy showName
        char* showName = new char[strlen(token) + 1];
        strcpy(showName, token);

        token = strtok(NULL, ",");
        if (token == NULL) {
            delete[] line;
            delete[] showName;
            continue;
        }

        // Allocate and copy characterName
        char* characterName = new char[strlen(token) + 1];
        strcpy(characterName, token);

        token = strtok(NULL, ",");
        if (token == NULL) {
            delete[] line;
            delete[] showName;
            delete[] characterName;
            continue;
        }

        int age = atoi(token);

        token = strtok(NULL, ",");
        if (token == NULL) {
            delete[] line;
            delete[] showName;
            delete[] characterName;
            continue;
        }

        // Allocate and copy specialAbility
        char* specialAbility = new char[strlen(token) + 1];
        strcpy(specialAbility, token);

        // Now you have showName, characterName, age, specialAbility
        // TODO: Add the character to the appropriate TVShow linked list
        // Remember to delete showName, characterName, and specialAbility when done
        NewTvShowList.AddShow(showName,characterName,specialAbility,age);


        // For demonstration purposes, let's just print them
        //  std::cout << "Show: " << showName << ", Character: " << characterName
        //            << ", Age: " << age << ", Ability: " << specialAbility << std::endl;

        // Don't forget to free the allocated memory
        delete[] showName;
        delete[] characterName;
        delete[] specialAbility;
        delete[] line;

    }


    std::cout << "Hello There and Welcome to the World of TV Show" << std::endl;
    std::cout << "Please dear user, look at the option table below and choose the action you want to do" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Press 1 to Display All TV Shows and Characters" << std::endl;
    std::cout << "Press 2 to Add a New Character" << std::endl;
    std::cout << "Press 3 to Delete a Character" << std::endl;
    std::cout << "Press 4 to Search for a Character" << std::endl;
    std::cout << "Press 5 to Sort Characters in a TV Show" << std::endl;
    std::cout << "Press 6 to Update Character Information" << std::endl;
    std::cout << "Press 7 to Exit Program" << std::endl;
    std::cout << "" << std::endl;

    int UserInput;
    std::cin>> UserInput;
    while (UserInput!=ExitProgram)
    {
        while(UserInput<(int)Display||UserInput>(int)ExitProgram)
        {
            std::cout << "This Number isnt an Opsion please try agine" << std::endl;
            std::cin>> UserInput;
        }

switch(UserInput) 
{
    case Display:
        NewTvShowList.PtintAllShow();//Print all Show from The File
    break;
    case AddCharacter:
        {
        char TempName[100];
        std::cout << "Plese enter Tv Show Name " << std::endl;
        std::cin.ignore(); 
        std::cin.getline(TempName, 100);;
        char  *ShowName=new char [strlen(TempName+1)];
        strcpy(ShowName,TempName);
        std::cout << "Plese enter Charcter Name " << std::endl;
        std::cin.ignore(); 
        std::cin.getline(TempName, 100);
        char  *CharcterName=new char [strlen(TempName+1)];
        strcpy(CharcterName,TempName);
        std::cout << "Plese enter Special Ability " << std::endl;
        std::cin.ignore(); 
        std::cin.getline(TempName, 100);
        char* SpecialAbility=new char[strlen(TempName+1)];
        strcpy(SpecialAbility,TempName);
        std::cout << "Plese enter Age " << std::endl;
        int Age;
        std::cin>> Age;
        NewTvShowList.AddShow(ShowName,CharcterName,SpecialAbility,Age);
        delete[] ShowName;
        delete[] CharcterName;
        delete[] SpecialAbility;
    break;
        }
   case DeleteCharacter:
   {
        char TempName[100];
        std::cout << "Plese enter CharacterName To Delete" << std::endl;
        std::cin.ignore(); 
        std::cin.getline(TempName, 100);
        char  *CharacterName=new char [strlen(TempName+1)];
        strcpy(CharacterName,TempName);
        NewTvShowList.DeleteCharacter(CharacterName);
        delete CharacterName;
    break;
   }
   case SearchCharacter:
   {
        char TempName[100];
        std::cout << "Plese enter CharacterName To Find" << std::endl;
        std::cin.ignore(); 
        std::cin.getline(TempName, 100);
        char  *CharacterName=new char [strlen(TempName+1)];
        strcpy(CharacterName,TempName);
        NewTvShowList.SearchCharacter(CharacterName);
        delete CharacterName;
    break;
   }
   case UpdateCharacter:
   {
        char TempName[100];
        std::cout << "UpdateCharacter Plese enter Charcter Name " << std::endl;
        std::cin.ignore(); 
        std::cin.getline(TempName, 100);
        char  *CharcterName=new char [strlen(TempName+1)];
        strcpy(CharcterName,TempName);
        std::cout << "Plese enter new  Special Ability for the Charcter " << std::endl;
        std::cin.ignore(); 
        std::cin.getline(TempName, 100);
        char* SpecialAbility=new char[strlen(TempName+1)];
        strcpy(SpecialAbility,TempName);
        std::cout << "Plese enter new Age for the Charcter " << std::endl;
        int Age;
        std::cin>> Age;
        NewTvShowList.UpdateCharacterInfo(CharcterName,SpecialAbility,Age);
   break;
   }
    case SortCharacter:
    char TempName[100];
     int num;

        std::cout << "SortCharacters Plese enter Tv Name To Sort"<< std::endl;
        std::cin.ignore(); 
        std::cin.getline(TempName, 100);
        char  *CharcterShow=new char [strlen(TempName+1)];
        strcpy(CharcterShow,TempName);
        std::cout << "Plese enter Sort Oreder Opsins"<< std::endl;
        std::cout << "SortByAgeDown=0"<< std::endl;
        std::cout << "SortByAgeUp=1"<< std::endl;
        std::cout << "SortByName=2"<< std::endl;
        std::cin>>num;
        NewTvShowList.SortCharacters(CharcterShow,(SortWay)num);
    break;

}         
    std::cout << "Whte Will you Want to do Now " << std::endl;
    std::cout << "Press 1 to Display All TV Shows and Characters" << std::endl;
    std::cout << "Press 2 to Add a New Character" << std::endl;
    std::cout << "Press 3 to Delete a Character" << std::endl;
    std::cout << "Press 4 to Search for a Character" << std::endl;
    std::cout << "Press 5 to Sort Characters in a TV Show" << std::endl;
    std::cout << "Press 6 to Update Character Information" << std::endl;
    std::cout << "Press 7 to Exit Program" << std::endl;
    std::cout << "" << std::endl;
     std::cin>> UserInput;
    }
    // NewTvShowList.AddShow("Eden");
     //NewTvShowList.AddCharacterToShow("Eden","LOLO","KUtnness lolo",24);
    // NewTvShowList.PtintAllShow();//Print all Show from The File
    std::cout << "Thank you for using our app. Hope to see you again soon. Goodbye" << std::endl;
    return 0;
}




