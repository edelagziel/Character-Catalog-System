#include <iostream>
#include "TvShowNode.hpp"
#include"CharacterList.hpp"



TvShowNode::TvShowNode(char*ShowName)
{
    this->ShowName=new char[strlen(ShowName+1)];
    this->ShowName=ShowName;
}

TvShowNode::~TvShowNode()
{
    delete []ShowName;
}

void TvShowNode::PrintNode()
{
    std::cout<<ShowName<<std::endl;
    this->MyCharacterList.PrintList();
    
}