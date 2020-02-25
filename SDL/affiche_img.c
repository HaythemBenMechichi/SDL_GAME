#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
int main(void)
{
SDL_Surface *screen = NULL;
SDL_Surface *image = NULL;
SDL_Rect pos;
char pause;

SDL_Init(SDL_INIT_VIDEO);
screen=SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE|SDL_DOUBLEBUF);
image=SDL_LoadBMP("Bitmap4.bmp");
pos.x=0;
pos.y=0;
pos.w=image->w;
pos.h=image->h;
SDL_BlitSurface(image,NULL,screen,&pos);
SDL_Flip(screen);
SDL_FreeSurface(image);
pause=getchar();
return 0;
}

