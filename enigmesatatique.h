#ifndef FONCTIONS_H_
#define FONCTIONS_H_

typedef struct
{
SDL_Surface *temps;
SDL_Rect postemps;
}temps;
typedef struct
{
SDL_Surface *bouton;
SDL_Rect posbouton;
}bouton;
typedef struct
{
SDL_Surface *perso;
SDL_Rect posperso;
}perso;
typedef struct
{
SDL_Surface *lab;
SDL_Rect poslab;
perso charactere;
}labyrinthe;
typedef struct
{
SDL_Surface *background;
SDL_Rect posbackground;
temps time;
bouton buttom[2];
}enigme;
void deplacementperso(labyrinthe laby);
void afficherlaby(labyrinthe laby);
void initialiserEnigme(enigme statique);
void afficheEnigme(enigme statique);
void resoudreEnigme(enigme statique);
void gestionDuTempsEnigme(enigme statique);
void generationAleatoirEnigme(enigme dynamique);
#endif
