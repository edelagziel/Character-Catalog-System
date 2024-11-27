#ifndef CHARACTERLIST_H
#define CHARACTERLIST_H
#include <cstring>
#include<iostream>
#include"CharacterNode.hpp"

class CharacterList
{

    public:
    void Add(char*Name,char*specialAbility,int age);
    void PrintList();
    CharacterList();
    ~CharacterList();
    
    private:
    CharacterNode *Head;
};









#endif