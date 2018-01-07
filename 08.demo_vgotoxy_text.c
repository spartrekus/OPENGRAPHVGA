
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
   printf( " Your VGA display is: %d %d \n", rows, cols ); // info on terminal 

   cls_screen( 3 ); 
   load_font( "DejaVuSans.ttf" );

   int px = 50; int py = 40; int tx = 100; int ty = 100; 
   put_text( py, px, ty, tx , "OK" , 7 ); // text on VGA screen (rect text)

   vgotoxy( 25, 25 ); 
   vcolor( 5 );
   vprint( "This " ); 

   vcolor( 6 );
   vprint( "is " ); 
   vprint( "an " ); 

   vcolor( 7 );
   vgotoxy( 50, 0 ); 
   vprint( "E X A M P L E!" ); 

   put_text( rows-40, cols-40, "|KEY|" );

   vgetch();

   close_vga(); // close clean
   return 0;
}

