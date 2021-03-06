


#include <stdio.h>
#include <stdlib.h>

//#include "opengraphvga.c" 
#include "opengraphvga-opengl.c" 

void demo_put_pixel(void)
{
  int px; int py;
  int couleur;
  int n; 
  px = 10 ; py = 10; 
  couleur = 10;
  for ( n = 0; n< 100; n++)
  {
     vga_put_pixel( px, py );
     px++; py++;
     couleur++;
  }
}


int main(void)
{
   def_vga( 200, 320 );  // init screen size
   def_vga_video_driver( "opengl" );  // init the display driver for BSD "opengl" 
   init_vga(); // init screen vga

   vga_cls_screen( 0 );
   demo_put_pixel();
   vga_getch();
   close_vga(); // close clean
   return 0;
}


