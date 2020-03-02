#include <stdio.h>
#include <stdlib.h>



typedef struct
{

 int health;
 int damage;

}lifezombie;


typedef struct
{

  SDL_Rect poszombie;
  lifezombie viezombie;
  SDL_Suraface imagezombie;
  int direction;  

}zombie;


int deplacer_zombie_aleatoire(zombie z);

void afficher_zombie(hero h);
int collision_zombie(zombie z,hero h);

