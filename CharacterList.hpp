#ifndef CHARACTERLIST_H
#define CHARACTERLIST_H
#include <cstring>
#include<iostream>
#include"CharacterNode.hpp"

class CharacterList
{

    public:
    void Add(char*Name,char*specialAbility,int age);
    void Add(CharacterNode*);
    void PrintList();
    CharacterNode* Find(char*Name);
    void DeleteNode(char*Name);
    void SortCharacter(int SortNum);
    CharacterList();
    ~CharacterList();

    
    private:
    CharacterList* Marge(CharacterList *A,CharacterList *B,int SortNum);
    CharacterNode *Head;
};









#endif