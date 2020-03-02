#include <stdio.h>
#include <stdlib.h>



SDL_Rect mouvementhero(SDL_Rect hero.poshero,int hero.direction)
{

  switch(direction)
{
   case haut:
  
   hero.poshero.y--;
    
   break;

   case bas:

   hero.poshero.y++;

   break;

   case gauche:

   hero.poshero.x--;

   break;

   case droite:

   hero.poshero.x++;

   break;

}

return hero.poshero;
}































