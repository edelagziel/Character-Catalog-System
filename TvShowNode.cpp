#include <iostream>
#include "TvShowNode.hpp"
#include"CharacterList.hpp"



TvShowNode::TvShowNode(char*ShowName)
{
    this->ShowName=new char[strlen(ShowName+1)];
    strcpy(this->ShowName,ShowName);
}

TvShowNode::~TvShowNode()
{
    delete []ShowName;
}
char* TvShowNode::GetName()
{
    return this->ShowName;
}
void TvShowNode::PrintNode()
{
    std::cout<<ShowName<<std::endl;
    this->MyCharacterList.PrintList();
    
}