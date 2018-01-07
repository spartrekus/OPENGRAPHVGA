

#include <stdio.h>
#include <stdlib.h>

#include "opengraphvga.c" 

void demo_rectangles(void)
{
  int px; int py;
  int couleur;
  int n; 
  px = 3 ; py = 10; 
  vga_cls_screen( 10 );

  for ( couleur = 1; n< 29 ; couleur++)
  {
     vga_color( couleur );
     vga_rectangle( px, py, 40, 40 );
     px+=10; py+=5;
  }
}


int main(void)
{
   init_vga(); // init screen vga
   demo_rectangles();
   vga_getch();
   close_vga(); // close clean
   return 0;
}


