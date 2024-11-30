#ifndef TVSHOWLIST_H
#define TVSHOWLIST_H

#include <cstring>
#include<iostream>
#include"TvShowNode.hpp"


class TvShowList
{
    public:
    TvShowList();
    ~TvShowList();
    void AddShow(char *ShowName);
    void AddShow(char *ShowName,char*Name,char*specialAbility,int age);
    void AddCharacterToShow(char *ShowName,char*Name,char*specialAbility,int age);
    void PtintAllShow();

    private:
    TvShowNode *Head;
    TvShowNode * NewShow(char*ShowName);

};


#endif