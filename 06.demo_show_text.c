


// fill screen with a color

#include <stdio.h>
#include <stdlib.h>

#include "opengraphvga.c" 


int main(void)
{
   def_vga(200, 320); // def screen vga size 320x200
   init_vga(); // init screen vga
   int rows, cols;
   rows = getmax_vga_rows();
   cols = getmax_vga_cols();

   cls_screen( 3 ); 
   load_font( "DejaVuSans.ttf" );
   int px = 50; int py = 40; int tx = 100; int ty = 100; 
   printf( " Your VGA display is: %d %d \n", rows, cols ); // info on terminal 
   put_text( py, px, ty, tx , "OK" , 7 ); // text on VGA screen

   vgetch();

   close_vga(); // close clean
   return 0;
}


