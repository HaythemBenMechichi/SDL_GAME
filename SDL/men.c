#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
int main(void)
{
SDL_Surface *screen = NULL;
SDL_Surface *image = NULL,*quit= NULL;
SDL_Surface *bot1 = NULL;
SDL_Surface *bot2 = NULL;
SDL_Surface *botquit1 = NULL;
SDL_Surface *botquit2 = NULL;
SDL_Surface *bot3 = NULL;
SDL_Surface *texte=NULL;
TTF_Font *police=NULL;
SDL_Color couleur={255,255,255};
SDL_Rect pos1,postxt;
Mix_Music*music;
Mix_Chunk *m;
Mix_Chunk *s;
SDL_Rect pos,posbut1,posbut2,posbut3,postest,posbutquit1,posbutquit2,postest1;
SDL_Event event; 
int continuer = 1;
int test=0,anime=1;
TTF_Init();
police=TTF_OpenFont("PIXEARG_.TTF",20);
texte=TTF_RenderText_Blended(police,"Copyright by rednax",couleur);

SDL_Init(SDL_INIT_VIDEO);
screen = SDL_SetVideoMode(1360,768,32, SDL_HWSURFACE|SDL_DOUBLEBUF|SDL_FULLSCREEN);
SDL_WM_SetCaption("menu", NULL);
quit=IMG_Load("quitoui_non.png");
botquit1=IMG_Load("accept1.png");
botquit2=IMG_Load("cancel1.png");
image=IMG_Load("k1.jpg");
bot1=IMG_Load("pl1.png");
bot2=IMG_Load("op1.png");
bot3=IMG_Load("ex1.png");
posbut1.x=270;
posbut1.y=200;
posbut2.x=270;
posbut2.y=300;
posbut3.x=270;
posbut3.y=400;
postxt.x=10;
postxt.y=10;
pos1.x=270;
pos1.y=200;
pos.x=0;
pos.y=0;
posbutquit1.x=300;
posbutquit1.y=400;
posbutquit2.x=600;
posbutquit2.y=400;

postest1.x=300;
postest1.y=400;
pos.w=image->w;
pos.h=image->h;
Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024);
music=Mix_LoadMUS("m.mp3");
m=Mix_LoadWAV("h.wav");
s=Mix_LoadWAV("butt1.wav");
Mix_PlayMusic(music,-1);
while (continuer) 
{
switch(pos1.y)
{
case 200:
bot1=IMG_Load("pl2.png");
bot2=IMG_Load("op1.png");
bot3=IMG_Load("ex1.png");
break;
case 300:
bot1=IMG_Load("pl1.png");
bot2=IMG_Load("op2.png");
bot3=IMG_Load("ex1.png");
break;
case 400:
bot1=IMG_Load("pl1.png");
bot2=IMG_Load("op1.png");
bot3=IMG_Load("ex2.png");
break;
Mix_FreeChunk(m);
}

image=IMG_Load("k1.jpg");
SDL_BlitSurface(image,NULL,screen,&pos);
SDL_BlitSurface(bot1,NULL,screen,&posbut1);
SDL_BlitSurface(bot2,NULL,screen,&posbut2);
SDL_BlitSurface(bot3,NULL,screen,&posbut3);
SDL_BlitSurface(texte,NULL,screen,&postxt);
SDL_Flip(screen);
SDL_Delay(33);
image=IMG_Load("k2.jpg");
SDL_BlitSurface(image,NULL,screen,&pos);
SDL_BlitSurface(bot1,NULL,screen,&posbut1);
SDL_BlitSurface(bot2,NULL,screen,&posbut2);
SDL_BlitSurface(bot3,NULL,screen,&posbut3);
SDL_BlitSurface(texte,NULL,screen,&postxt);
SDL_Flip(screen);
SDL_Delay(33);
image=IMG_Load("k3.jpg");
SDL_BlitSurface(image,NULL,screen,&pos);
SDL_BlitSurface(bot1,NULL,screen,&posbut1);
SDL_BlitSurface(bot2,NULL,screen,&posbut2);
SDL_BlitSurface(bot3,NULL,screen,&posbut3);
SDL_BlitSurface(texte,NULL,screen,&postxt);
SDL_Flip(screen);
SDL_Delay(33);



SDL_WaitEvent(&event);

switch(event.type)
{
case SDL_QUIT: 
continuer = 0;
break;
case SDL_MOUSEMOTION:
	if((event.motion.y>=200&&event.motion.y<=288)&&(event.motion.x>=270&&event.motion.x<=472))
		{
			pos1.y=200;
			postest.y=event.motion.y;
			if(test!=1)
			{
			Mix_PlayChannel(1,s,0);
			test=1;
			}	
		}
	else if((event.motion.y>=300&&event.motion.y<=388)&&(event.motion.x>=270&&event.motion.x<=472))
		{
			pos1.y=300;
			if(test!=2)
			{
			Mix_PlayChannel(1,s,0);
			test=2;
			}		
		}
	else if((event.motion.y>=400&&event.motion.y<=488)&&(event.motion.x>=270&&event.motion.x<=472))
		{
			pos1.y=400;
			if(test!=3)
			{
			Mix_PlayChannel(1,s,0);
			test=3;
			}		
		}
	/*case SDL_MOUSEBUTTONUP:
		if(event.button.button==SDL_BUTTON_LEFT)
			{
				if((event.motion.y>=200&&event.motion.y<=288)&&(event.motion.x>=270&&event.motion.x<=472))
		{
			pos1.y=200;
			postest.y=event.motion.y;
			if(test!=1)
			{
			Mix_PlayChannel(1,s,0);
			test=1;
			}	
		}
	else if((event.motion.y>=300&&event.motion.y<=388)&&(event.motion.x>=270&&event.motion.x<=472))
		{
			pos1.y=300;
			if(test!=2)
			{
			Mix_PlayChannel(1,s,0);
			test=2;
			}		
		}
	else if((event.motion.y>=400&&event.motion.y<=488)&&(event.motion.x>=270&&event.motion.x<=472))
		{
			pos1.y=400;
			if(test!=3)
			{
			Mix_PlayChannel(1,s,0);
			test=3;
			}		
		}
			}
break;*/
case SDL_KEYDOWN:
{
switch (event.key.keysym.sym)
{
case SDLK_RETURN:
switch(pos1.y)
{
case (400):

bot1=IMG_Load("pl1.png");
bot2=IMG_Load("op1.png");
bot3=IMG_Load("ex3.png");
Mix_PlayChannel(1,m,0);
continuer = 2;
while(continuer==2)
{
	switch(postest1.x)
	{
	case 300:
botquit1=IMG_Load("accept2.png");
botquit2=IMG_Load("cancel1.png");
	break;
	case 600:
botquit1=IMG_Load("accept1.png");
botquit2=IMG_Load("cancel2.png");
	break;
	}

SDL_BlitSurface(quit,NULL,screen,&pos);
SDL_BlitSurface(botquit1,NULL,screen,&posbutquit1);
SDL_BlitSurface(botquit2,NULL,screen,&posbutquit2);
SDL_Flip(screen);

SDL_WaitEvent(&event);

	switch(event.type)
	{
	case SDL_QUIT: 
	continuer = 1;
	break;
	case SDL_KEYDOWN:
		switch (event.key.keysym.sym)
		{
		case SDLK_ESCAPE:
		continuer=1;
		break;
	case SDLK_RIGHT:
	postest1.x+=300;
	Mix_PlayChannel(1,s,0);
	if(postest1.x>600)
	{
	postest1.x=300;
	}
	break;
	case SDLK_LEFT:
	postest1.x-=300;
	Mix_PlayChannel(1,s,0);
	if(postest1.x<300)
	{
	postest1.x=600;
	}
	break;
	case SDLK_RETURN:
	if(postest1.x==300)
	{
	Mix_PlayChannel(1,m,0);
	continuer = 0;
	}
	else if(postest1.x==600)
	{
	Mix_PlayChannel(1,m,0);
	continuer = 1;
	}
	break;
	}
	}
	}
	break;

case (300):
bot1=IMG_Load("pl1.png");
bot2=IMG_Load("op3.png");
bot3=IMG_Load("ex1.png");
Mix_PlayChannel(1,m,0);
continuer = 3;
break;
case (200):
bot1=IMG_Load("pl3.png");
bot2=IMG_Load("op1.png");
bot3=IMG_Load("ex1.png");
Mix_PlayChannel(1,m,0);
continuer = 4;
while(continuer==4)
{

image=IMG_Load("load1.jpg");
SDL_BlitSurface(image,NULL,screen,&pos);
SDL_Flip(screen);
SDL_Delay(200);
image=IMG_Load("load2.jpg");
SDL_BlitSurface(image,NULL,screen,&pos);
SDL_Flip(screen);
SDL_Delay(200);
image=IMG_Load("load3.jpg");
SDL_BlitSurface(image,NULL,screen,&pos);
SDL_Flip(screen);
SDL_Delay(100);

SDL_PollEvent(&event);

switch(event.type)
{
case SDL_QUIT: 
continuer = 1;
break;
case SDL_KEYDOWN:
{
switch (event.key.keysym.sym)
{
case SDLK_ESCAPE:
continuer=1;
image=IMG_Load("back.jpg");
break;
}
break;
}
}
}
break;
}
break;
case SDLK_ESCAPE:
continuer=0;
break;
case SDLK_UP:
pos1.y-=100;
Mix_PlayChannel(1,s,0);
if(pos1.y<200)
{
pos1.y=400;
}
break;
case SDLK_DOWN:
pos1.y+=100;
Mix_PlayChannel(1,s,0);
if(pos1.y>400)
{
pos1.y=200;
}
break;
}
}
break;
}



if(continuer==0)
{
SDL_Delay(5000);
}



}
SDL_FreeSurface(texte);
SDL_FreeSurface(image);
SDL_FreeSurface(bot1);
SDL_FreeSurface(bot2);
SDL_FreeSurface(bot3);
Mix_FreeMusic(music);
SDL_Quit();
return EXIT_SUCCESS;
}
/*SDL_BlitSurface(image,NULL,screen,&pos);
SDL_BlitSurface(bot1,NULL,screen,&posbut1);
SDL_BlitSurface(bot2,NULL,screen,&posbut2);
SDL_BlitSurface(bot3,NULL,screen,&posbut3);
SDL_BlitSurface(texte,NULL,screen,&postxt);
SDL_Flip(screen);*/
/*case 2:
image=IMG_Load("2.jpg");
SDL_BlitSurface(image,NULL,screen,&pos);
SDL_BlitSurface(bot1,NULL,screen,&posbut1);
SDL_BlitSurface(bot2,NULL,screen,&posbut2);
SDL_BlitSurface(bot3,NULL,screen,&posbut3);
SDL_BlitSurface(texte,NULL,screen,&postxt);
SDL_Delay(200);
SDL_Flip(screen);
anime++;
break;*/
/*anim=IMG_Load("1.png");
SDL_BlitSurface(anim,NULL,screen,&pos_1);
anim=IMG_Load("2.png");
SDL_BlitSurface(anim,NULL,screen,&pos_1);
anim=IMG_Load("3.png");
SDL_BlitSurface(anim,NULL,screen,&pos_1);
anim=IMG_Load("4.png");
SDL_BlitSurface(anim,NULL,screen,&pos_1);*/
/*switch(anime)
{
case 1:
image=IMG_Load("k1.jpg");
SDL_BlitSurface(image,NULL,screen,&pos);
SDL_BlitSurface(bot1,NULL,screen,&posbut1);
SDL_BlitSurface(bot2,NULL,screen,&posbut2);
SDL_BlitSurface(bot3,NULL,screen,&posbut3);
SDL_BlitSurface(texte,NULL,screen,&postxt);
SDL_Flip(screen);
SDL_Delay(200);
anime++;
break;
case 2:
image=IMG_Load("k2.jpg");
SDL_BlitSurface(image,NULL,screen,&pos);
SDL_BlitSurface(bot1,NULL,screen,&posbut1);
SDL_BlitSurface(bot2,NULL,screen,&posbut2);
SDL_BlitSurface(bot3,NULL,screen,&posbut3);
SDL_BlitSurface(texte,NULL,screen,&postxt);
SDL_Flip(screen);
SDL_Delay(200);

anime++;
break;
case 3:
image=IMG_Load("k3.jpg");
SDL_BlitSurface(image,NULL,screen,&pos);
SDL_BlitSurface(bot1,NULL,screen,&posbut1);
SDL_BlitSurface(bot2,NULL,screen,&posbut2);
SDL_BlitSurface(bot3,NULL,screen,&posbut3);
SDL_BlitSurface(texte,NULL,screen,&postxt);
SDL_Flip(screen);
SDL_Delay(200);
anime=1;
break;
}*/

