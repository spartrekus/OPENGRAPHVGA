


// fill screen with a color

#include <stdio.h>
#include <stdlib.h>

#include "opengraphvga.c" 

void demo_rectangles(void)
{
  int px; int py;
  int couleur;
  int n; 
  px = 3 ; py = 10; 
  cls_ecran( 10 );

  for ( couleur = 1; n< 29 ; couleur++)
  {
     rectangle( px, py, 40, 40, couleur );
     px+=10; py+=5;
  }
}


int main(void)
{
   init_vga(); // init screen vga
   demo_rectangles();
   getch();
   fermeture_vga(); // close clean
   return 0;
}


