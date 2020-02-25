#include "affiche.h"



void pause()
{
int continuer = 1;
SDL_Event event;
while (continuer)
{
SDL_WaitEvent(&event);
switch(event.type)
{
case SDL_QUIT:
continuer = 0;
}
}
}
void lun(SDL_Surface *screen)
{
SDL_Rect pos;
SDL_Surface *anim = NULL;
pos.x=50;
pos.y=50;
anim=IMG_Load("1.png");
SDL_BlitSurface(anim,NULL,screen,&pos);
anim=IMG_Load("2.png");
SDL_BlitSurface(anim,NULL,screen,&pos);
anim=IMG_Load("3.png");
SDL_BlitSurface(anim,NULL,screen,&pos);
anim=IMG_Load("4.png");
SDL_BlitSurface(anim,NULL,screen,&pos);
}
