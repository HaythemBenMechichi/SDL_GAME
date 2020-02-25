#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL_mixer.h>
#include "SDL/SDL.h"
#include "affiche.h"
int main(void)
{
SDL_Surface *screen=NULL;
Mix_Music*music;
SDL_Init(SDL_INIT_VIDEO);
screen=SDL_SetVideoMode(1080,500,32,SDL_HWSURFACE|SDL_DOUBLEBUF);
if(!screen)
{
printf("unable to set 1080*500 video :%s \n",SDL_GetError());
return (-1);
}
if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1)
{
printf("%s",Mix_GetError());
}
music=Mix_LoadMUS("1311.mp3");
Mix_PlayMusic(music,-1);
SDL_FillRect(screen,0,SDL_MapRGB(screen->format,255,250,0));
SDL_Flip(screen);
Mix_FreeMusic(music);
SDL_Quit();
return 0;
}
