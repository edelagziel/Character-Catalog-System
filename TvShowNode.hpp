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
    CharacterList MyCharacterList;
    TvShowNode * Next;
    char* GetName();
    private:
    char* ShowName;
 


};



#endif