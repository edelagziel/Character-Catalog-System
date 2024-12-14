#ifndef TVSHOWLIST_H
#define TVSHOWLIST_H

#include <cstring>
#include<iostream>
#include"TvShowNode.hpp"



enum SortWay
{
    SortByAgeDown=0,
    SortByAgeUp=1,
    SortByName=2
};

class TvShowList
{
    public:
    TvShowList();
    ~TvShowList();
    void AddShow(char *ShowName);
    void AddShow(char *ShowName,char*Name,char*specialAbility,int age);
    void AddCharacterToShow(char *ShowName,char*Name,char*specialAbility,int age);
    void PtintAllShow();
    void DeleteCharacter(char *Name);
    void SearchCharacter(char *Name);
    void SortCharacters (char *TvShowName,SortWay CossenSort);
    void UpdateCharacterInfo(char *Name,char *specialAbility,int age);
    

    private:
    TvShowNode *Head;
    TvShowNode * NewShow(char*ShowName);

};


#endif