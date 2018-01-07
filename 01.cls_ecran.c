
// fill screen with a color

#include <stdio.h>
#include <stdlib.h>

#include "opengraphvga.c" 


int main(void)
{
   init_vga(); // init screen vga

   int ch = vga_getch();    // wait key
   vga_cls_screen( 3 ); // fill screen with color #3
   vga_getch();    // wait key
   close_vga(); // close clean

   printf( "Key: %d  \n " , ch );
   return 0;
}

