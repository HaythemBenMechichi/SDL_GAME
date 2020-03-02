#include <stdio.h>
#include <stdlib.h>




typedef struct
{

 int health;
 int damage;

}lifeboss;





typedef struct
{

  SDL_Rect posboss;
  lifeboss vieboss;
  SDL_Surface boss;
  int direction;  

}boss;


int deplacer_boss(boss b);
void afficher_boss(boss b);
int collision_boss(boss b,hero h);


