
#include <stdio.h>
#include <stdlib.h>





typedef struct
{

 int health;
 int damage;

}lifezombie;

typedef struct
{

 int health;
 int damage;

}lifeboss;






typedef struct
{

  SDL_Rect poszombie;
  lifezombie viezombie;
  SDL_Suraface imagezombie;
  int direction;  

}zombie;

typedef struct
{

  SDL_Rect posboss;
  lifeboss vieboss;
  SDL_Surface boss;
  int direction;  

}boss;

typedef struct
{

  SDL_Rect docteur;
  SDL_Surface imagedocteur;
 
}docteur;


SDL_Rect mouvementhero(SDL_Rect hero.poshero,int hero.direction);
SDL_Rect mouvementzombie(SDL_Rect zombie.poszombie,int zombie.direction);
SDL_Rect mouvementboss(SDL_Rect boss.posbosshero,int boss.direction);1
 


