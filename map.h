
#ifndef FONCTIONS_H_
#define FONCTIONS_H_



typedef struct  


{ 

     SDL_Surface *map;
     SDL_Surface *ecran;
     SDL_Rect posmap,posecran;



   }map;
   void affichemap(map m);
   void scrollingmap(map m);

#endif 
