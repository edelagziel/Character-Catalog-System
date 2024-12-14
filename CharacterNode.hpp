#ifndef CHARACTERNODE_H
#define CHARACTERNODE_H

#include <cstring>
/// @brief CharacterNode Class Countaine all The parmter One Node Need 
class CharacterNode
{
    public:
    CharacterNode();
    ~CharacterNode();
    CharacterNode(char*Name,char*specialAbility,int age);
    void PrintNode();
    CharacterNode * Next;       //pointer to The Next Charcter 


    
    char * Name;            //The name of the character.
    char* specialAbility;   //A brief description of the character's special ability.
    int age;                //The age of the character

};



#endif