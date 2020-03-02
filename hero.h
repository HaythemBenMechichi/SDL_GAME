#include <stdio.h>
#include <stdlib.h>


typedef struct
{

 int nbre_vie;
 

}life;

typedef struct
{

 SDL_Rect posscore;
 SDL_Surface imagescore;
 int nbre_score;

}score;

typedef struct
{

  SDL_Rect poshero;
  life viehero;
  score score;
  SDL_Suraface imagehero;
  int direction;

}hero;

int incrementer_viehero(hero h);
int incrementer_scorehero(hero h);
int decrementer_viehero(hero h);
int decrementer_scorehero(hero h);
int deplacer_hero_souris(hero h);
int deplacer_hero_clavier(hero h);
void afficher_hero(hero h);
int collision_hero(hero h,osbsatcle obs);


