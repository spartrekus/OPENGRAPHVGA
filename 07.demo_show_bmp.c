

#include <stdio.h>
#include <stdlib.h>

#include "opengraphvga.c" 


int main(void)
{
   def_vga(200, 320); // def screen vga size 320x200
   init_vga(); // init screen vga

   vga_cls_screen( 3 ); 
   vga_put_image_bmp( 0, 0, "freemickey.bmp" ); // place image at y=0 x=0 
   vga_getch();

   close_vga(); // close clean
   return 0;
}


