
#include <stdio.h>
#include <stdlib.h>

#include "opengraphvga.c" 


int main(void)
{
   def_vga(200, 320); // def screen vga size 320x200
   init_vga(); // init screen vga

   vga_cls_screen( 3 ); 
   vga_load_font( "DejaVuSans.ttf" );

   int px = 50; int py = 40; int tx = 100; int ty = 100; 
   vga_put_text( py, px, "OK" , 7 ); // text on VGA screen (rect text)

   vga_gotoxy( 25, 25 ); 
   vga_color( 5 );
   vga_print( "This " ); 

   vga_color( 6 );
   vga_print( "is " ); 
   vga_print( "an " ); 

   vga_color( 7 );
   vga_gotoxy( 50, 0 ); 
   vga_print( "E X A M P L E!" ); 

   vga_color( 10 );
   vga_put_text( rows-40, cols-40, "|KEY|" );

   vga_getch();

   close_vga(); // close clean
   return 0;
}


