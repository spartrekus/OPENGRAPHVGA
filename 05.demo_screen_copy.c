

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
     vga_color( couleur );
     vga_rectangle( px, py, 40, 40 );
     px+=10; py+=5;
  }
}

void demo_move_image(void)
{
   vga_cls_screen( 3 ); 
   remplissage_ecran();
   vga_getch();

   // y1 x1 y2 x2 ==> y3 x3
   vga_copy_image( 10, 10, 100, 70, 150, 50 );
   vga_getch();
}


int main(void)
{
   init_vga(); // init screen vga
   demo_move_image();
   close_vga(); // close clean
   return 0;
}


