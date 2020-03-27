#ifndef FONCTIONS_H_
#define FONCTIONS_H_

typedef struct
{
SDL_Surface *temps;
SDL_Rect postemps;
}temps;
typedef struct
{
SDL_Surface *icone;
SDL_Rect posicone;
}iconeenigme;
typedef struct
{
SDL_Surface *background;
SDL_Rect posbackground;
temps time;
iconeenigme Mat[2][2];
}enigme;
void initialiserEnigme(enigme dynamique);
void afficheEnigme(enigme dynamique);
void resoudreEnigme(enigme *dynamique);
void gestionDuTempsEnigme(enigme *dynamique);
void generationAleatoirEnigme(enigme *dynamique);
#endif
