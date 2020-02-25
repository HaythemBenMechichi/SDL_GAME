#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>
int main(void)
{
SDL_Surface *screen = NULL;
SDL_Surface *image = NULL;
SDL_Surface *perso = NULL;
SDL_Rect pos,pos_perso;
int continuer = 1;
SDL_Event event;
Mix_Music*music;

SDL_Init(SDL_INIT_VIDEO);
screen=SDL_SetVideoMode(1301,755,32,SDL_HWSURFACE|SDL_DOUBLEBUF);
image=SDL_LoadBMP("background.bmp");
perso=IMG_Load("kk.png");

pos.x=0;
pos.y=0;
pos_perso.x=500;
pos_perso.y=200;

pos.w=image->w;
pos.h=image->h;
if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1)
{
printf("%s",Mix_GetError());
}
music=Mix_LoadMUS("1311.mp3");
Mix_PlayMusic(music,-1);
SDL_BlitSurface(image,NULL,screen,&pos);
SDL_BlitSurface(perso,NULL,screen,&pos_perso);
SDL_Flip(screen);
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
SDL_FreeSurface(image);
SDL_FreeSurface(perso);
Mix_FreeMusic(music);
SDL_Quit();
return 0;
}

