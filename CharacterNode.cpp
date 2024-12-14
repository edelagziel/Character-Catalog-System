#include <iostream>
#include "CharacterNode.hpp"


CharacterNode:: CharacterNode(char*Name,char*specialAbility,int age)
{
    this->Name=new char (strlen(Name+1));
    strcpy(this->Name,Name);

    this->specialAbility=new char (strlen(specialAbility+1));
    strcpy(this->specialAbility,specialAbility);
    this->age=age;
    this->Next=NULL;
}
 CharacterNode:: ~CharacterNode()
 {
    if(this->Name!=nullptr)
    delete[]this->Name;
    if(this->specialAbility!=nullptr)
    delete[]this->specialAbility;
    
 }
 void CharacterNode::PrintNode()
 {
     std::cout << Name<<" ";
     std::cout << specialAbility<<" ";
     std::cout << age<<std::endl;
 }
  

