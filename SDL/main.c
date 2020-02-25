#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"
#include "affiche.h"
int main(void)
{
SDL_Surface *screen=NULL;

SDL_Init(SDL_INIT_VIDEO);
screen=SDL_SetVideoMode(1080,500,32,SDL_HWSURFACE|SDL_DOUBLEBUF);
if(!screen)
{
printf("unable to set 1080*500 video :%s \n",SDL_GetError());
return (-1);
}
SDL_FillRect(screen,0,SDL_MapRGB(screen->format,255,250,0));
SDL_Flip(screen);
pause();

return 0;
}
