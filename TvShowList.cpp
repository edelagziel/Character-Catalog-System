#include "TvShowList.hpp"
#include<iostream>
#include <cstring>

TvShowNode * TvShowList::NewShow(char*ShowName)
{  
    TvShowNode *NewTvNode=new TvShowNode(ShowName);
    if(Head==NULL)
    {
        Head=NewTvNode;
        return NewTvNode;
    }

  TvShowNode *FirstCurrent=Head;
    TvShowNode *FirstPrev=Head;

    while(FirstCurrent!=nullptr)
    {
        if(strcmp(ShowName,FirstCurrent->GetName())==0)
        {
            //std::cout<<"Tv Show is Exzist"<<std::endl;
           delete NewTvNode;
           return FirstCurrent;
        }
        FirstPrev=FirstCurrent;
        FirstCurrent=FirstCurrent->Next;
    }
    //std::cout<<"Tv Show Not Exist adding new"<<std::endl;
    FirstPrev->Next=NewTvNode;
    NewTvNode->Next=NULL;
    return NewTvNode; 
 }


TvShowList::TvShowList()
{
    Head=nullptr;
}

TvShowList::~TvShowList()
{
    Head=nullptr;
}
void TvShowList::AddShow(char *ShowName)
{
    NewShow(ShowName);

}

void TvShowList::AddShow(char *ShowName,char*Name,char* specialAbility,int age)
{
   TvShowNode *Current= NewShow(ShowName);
   if(Current!=NULL)
   Current->MyCharacterList.Add(Name,specialAbility,age);
}


void TvShowList::AddCharacterToShow(char *ShowName,char*Name,char*specialAbility,int age)
{
    if(Head==NULL)
    {
        std::cout<<"You Have No added Tv Show"<<std::endl;
        return;
    }
    if(ShowName==nullptr)
    {
        std::cout<<"Null Tv Show name"<<std::endl;
        return;
    }
    TvShowNode *Current=Head;
    while(Current!=nullptr)
    {
        if(strcmp(ShowName,Current->GetName())==0)
        {
            Current->MyCharacterList.Add(Name,specialAbility,age);
            std::cout<<"Sussses Adding To The Show"<<std::endl;
            return;
        }
        Current=Current->Next;
    }
    std::cout<<"Faill No Tv Show Found"<<std::endl;
}
    void TvShowList::PtintAllShow()
    {
        if(Head==nullptr)return;
        TvShowNode *Current=Head;
        while(Current!=nullptr)
        {
            Current->PrintNode();
            Current=Current->Next;
        }

    }
   void TvShowList::DeleteCharacter(char *Name )
   {
       if(Head==nullptr)return;
        TvShowNode *Current=Head;
        while(Current!=nullptr)
        {
            CharacterNode *FoundChrcter= Current->MyCharacterList.Find(Name);
            if(FoundChrcter!=nullptr)
            {
                Current->MyCharacterList.DeleteNode(Name);
                return;
            }
            Current=Current->Next;
        }
        std::cout<<"Charcter Didnot Found"<<std::endl;
   }

   void TvShowList::SearchCharacter(char *Name)
   {
    if(Head==nullptr)return;
        TvShowNode *Current=Head;
        while(Current!=nullptr)
        {
            CharacterNode *FoundChrcter= Current->MyCharacterList.Find(Name);
            if(FoundChrcter!=nullptr)
            {
                std::cout<<Current->GetName()<<std::endl;
                FoundChrcter->PrintNode();
                return;
            }
            Current=Current->Next;
        }
        std::cout<<"Charcter Didnot Found"<<std::endl;
   }
  
   void TvShowList::UpdateCharacterInfo(char *Name, char *specialAbility, int age)
   {
       if (Head == nullptr)
           return;
       TvShowNode *Current = Head;
       while (Current != nullptr)
       {
           CharacterNode *FoundChrcter = Current->MyCharacterList.Find(Name);
           if (FoundChrcter != nullptr)
           {
               FoundChrcter->age = age;
               delete[] FoundChrcter->specialAbility;
               FoundChrcter->specialAbility = new char[strlen(specialAbility) + 1];
               strcpy(FoundChrcter->specialAbility, specialAbility);
               return;
           }
           Current = Current->Next;
       }
       std::cout << "Charcter Didnot Found" << std::endl;
      }



    void TvShowList::SortCharacters(char*TvShowName,SortWay CossenSort)
   {
        TvShowNode *Cur=Head;

        while(Cur!=NULL&& strcmp(TvShowName,Cur->GetName()))
        {
            Cur=Cur->Next;        
        }
        if(Cur==NULL)
        {
            std::cerr<<"Tv Not Found"<<std::endl;
            return;
        }
        Cur->MyCharacterList.SortCharacter((int)CossenSort);
    
   }


   



