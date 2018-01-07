

#include <stdio.h>
#include <stdlib.h>

#include "opengraphvga.c" 

void demo_put_pixel(void)
{
  int px; int py;
  int couleur;
  int n; 
  px = 10 ; py = 10; 
  couleur = 10;
  for ( n = 0; n< 100; n++)
  {
     put_pixel( px, py, couleur );
     px++; py++;
     couleur++;
  }
}


int main(void)
{
   init_vga(); // init screen vga
   cls_screen( 0 );
   demo_put_pixel();
   getch();
   fermeture_vga(); // close clean
   return 0;
}


