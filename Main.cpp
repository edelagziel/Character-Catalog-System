#include<iostream>
#include"CharacterNode.hpp"
#include"CharacterList.hpp"
#include"TvShowNode.hpp"
#include"TvShowList.hpp"
int main()
{
//      char* eden="Eden";
//          char* Smrtness="Smrtness";

// //    CharacterNode EdenChrcter(eden,Smrtness,25);
// //     EdenChrcter.PrintNode();
// CharacterList CharacterListmy;
// CharacterListmy.Add("eden","Smrtness",25);
// CharacterListmy.Add("yam","Gitar",17);
// CharacterListmy.PrintList();


TvShowList NewShowList;
 NewShowList.AddCharacterToShow("Dragonball","Goko","Sayien",45);
   NewShowList.AddShow("zzz","rrotot","www",32);
    NewShowList.PtintAllShow();







    return 1;
}
