

// fill screen with a color

#include <stdio.h>
#include <stdlib.h>

#include "opengraphvga.c" 


int main(void)
{
   init_vga(); // init screen vga
   vgetch();    // wait key
   cls_screen( 3 ); // fill screen with color #3
   vgetch();    // wait key
   fermeture_vga(); // close clean
   return 0;
}


