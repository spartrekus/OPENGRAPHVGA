
#include <stdio.h>
#include <stdlib.h>

#include "opengraphvga.c" 


int main(void)
{
   def_vga(200, 320); // def screen vga size 320x200
   init_vga(); // init screen vga

   vga_cls_screen( 3 ); 
   vga_load_font( "DejaVuSans.ttf" );

   // print EXAMPLE with gotoxy
   vga_color( 5 );
   vga_gotoxy( 25, 25 ); 
   vga_print( "E X A M P L E!" ); 

   // print HELLO with single chars
   int px = 50; int py = 40; 
   vga_put_char( py, px,  'H' );
   vga_char( 'E' );
   vga_char( 'L' );
   vga_char( 'L' );
   vga_char( 'O' );

   vga_getch();

   close_vga(); // close clean
   return 0;
}


