#ifndef TVSHOWNODE_H
#define TVSHOWNODE_H

#include <cstring>
#include<iostream>
#include"CharacterList.hpp"

class TvShowNode
{
    public:
    //TvShowNode();
    ~TvShowNode();
    TvShowNode(char*ShowName);
    void PrintNode();
    private:
    char* ShowName;
    CharacterList MyCharacterList;
    TvShowNode * Next;

};



#endif