#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>


int main(void)
{
SDL_Surface *ecran = NULL;
SDL_Event event; 
int continuer = 1; 
SDL_Init(SDL_INIT_VIDEO);
ecran = SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE);
SDL_WM_SetCaption("Gestion des événements", NULL);
while (continuer) 
{
SDL_WaitEvent(&event);
switch(event.type)
{
case SDL_QUIT: 
continuer = 0;
break;
}
}
SDL_Quit();
return EXIT_SUCCESS;
}
