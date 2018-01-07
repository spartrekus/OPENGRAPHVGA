
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
    vga_color( couleur );
    vga_h_line( px, py, 320 );
    py++;
  }
}


int main(void)
{
   init_vga(); // init screen vga
   vga_cls_screen( 0 );
   remplissage_ecran();
   vga_getch();
   close_vga(); // close clean
   return 0;
}


