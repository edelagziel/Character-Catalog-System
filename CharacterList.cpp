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
    Add(NewCharacter);
}

void CharacterList::Add(CharacterNode *Node)
{
    CharacterNode *Current ;
    Current=Head;
    while(Current->Next!=NULL)
    {
        Current=Current->Next;
    }
    Current->Next=Node;
    Node->Next=NULL;
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
CharacterNode* CharacterList::Find(char*Name)
{
    if(Name==NULL)
    {
        std::cout<<"Error Name"<<std::endl;
        return nullptr;
    }
    if(Head!=NULL)
    {
        CharacterNode *Current=Head;
        while (Current!=NULL)
        {
            if(strcmp(Name,Current->Name)==0)
            {
                return Current;
            }
            Current=Current->Next;
        }
                
    }
    return NULL;
}
void CharacterList::DeleteNode(char*Name)
{
     if(Name==NULL)
    {
        std::cout<<"Error Name"<<std::endl;
        return ;
    }
        if(Head==NULL)
        {
            std::cout<<"Head==Null"<<std::endl;
            return ;
        }

        CharacterNode *Current=Head;
        CharacterNode *Prev=Head;
        while (Current!=NULL)
        {
            if(strcmp(Name,Current->Name)==0)
            {
                if(Head==Current)
                {
                    Head=Current->Next;
                }
                else
                Prev->Next=Current->Next;
                delete Current;
                std::cout<<"Character Delted "<<std::endl;
                return ;
            }
            Prev=Current;
            Current=Current->Next;

        }
                std::cout<<"Name Not Found"<<std::endl;

}

void CharacterList::SortCharacter(int SortNum)
{
    if (Head == NULL || Head->Next == NULL) return; 

    bool swapped;
    do {
        swapped = false;
        CharacterNode *Current = Head;
        CharacterNode *Prev = NULL;

        while (Current != NULL && Current->Next != NULL) {
            bool shouldSwap = false;

            if (SortNum == 0) { 
                if (Current->age < Current->Next->age) {
                    shouldSwap = true;
                }
            } else if (SortNum == 1) { 
                if (Current->age > Current->Next->age) {
                    shouldSwap = true;
                }
            } else if (SortNum == 2) { 
                if (strcmp(Current->Name, Current->Next->Name) > 0) {
                    shouldSwap = true;
                }
            }

            if (shouldSwap) {
                CharacterNode *Temp = Current->Next;
                Current->Next = Temp->Next;
                Temp->Next = Current;

                if (Prev == NULL) {
                    Head = Temp;
                } else {
                    Prev->Next = Temp;
                }

                swapped = true;
                Prev = Temp; 
            } else {
                Prev = Current;
                Current = Current->Next;
            }
        }
    } while (swapped);
}



   

