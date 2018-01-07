

#include <stdio.h>
#include <stdlib.h>

#include "opengraphvga.c" 

void remplissage_ecran(void)
{
  int px; int py;
  int couleur;
  int n; 
  px = 0 ; py = 0; 
  for ( couleur = 0; couleur< 200; couleur++)
  {
    h_line( px, py, 320, couleur );
    py++;
  }
}


int main(void)
{
   init_vga(); // init screen vga
   remplissage_ecran();
   getch();
   fermeture_vga(); // close clean
   return 0;
}


