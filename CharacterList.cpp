#include<iostream>
#include"CharacterNode.hpp"
#include "CharacterList.hpp"


CharacterList::CharacterList()
{
    this->Head=NULL;
}

CharacterList::~CharacterList()
{
        CharacterNode *Current =Head;
        CharacterNode *Prev=Head ;

    while(Current!=nullptr)
    {
        Current=Current->Next;
        delete Prev;
        Prev=Current;
    }
         Head=nullptr;

}

void CharacterList::Add(char*Name,char*specialAbility,int age)
{
    CharacterNode *NewCharacter=new CharacterNode(Name,specialAbility,age);//Create New node And paresed Apointer to him
    if(Head==NULL)
    {
        Head=NewCharacter;
        return;
    }
    CharacterNode *Current ;
    Current=Head;
    while(Current->Next!=NULL)
    {
        Current=Current->Next;
    }
    Current->Next=NewCharacter;
    NewCharacter->Next=NULL;
}

void CharacterList::PrintList()
{
    if(Head==NULL)return;
    CharacterNode *Current = Head;
    while(Current!=NULL)
    {
        Current->PrintNode();
        Current=Current->Next;
    }

}