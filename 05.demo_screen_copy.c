

#include <stdio.h>
#include <stdlib.h>

#include "opengraphvga.c" 

void remplissage_ecran(void)
{
  int px; int py;
  int couleur;
  int n; 
  px = 3 ; py = 10; 
  for ( couleur = 1; n< 29 ; couleur++)
  {
     rectangle( px, py, 40, 40, couleur );
     px+=10; py+=5;
  }
}

void demo_move_image(void)
{
   cls_screen( 3 ); 
   remplissage_ecran();
   vgetch();

   // y1 x1 y2 x2 ==> y3 x3
   copy_image( 10, 10, 100, 70, 150, 50 );
   getch();
}


int main(void)
{
   init_vga(); // init screen vga
   demo_move_image();
   close_vga(); // close clean
   return 0;
}


