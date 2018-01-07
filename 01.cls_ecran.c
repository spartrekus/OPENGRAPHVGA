

// fill screen with a color

#include <stdio.h>
#include <stdlib.h>

#include "graphvga.c" 


int main(void)
{
   init_vga(); // init screen vga
   getch();    // wait key
   cls_ecran( 3 ); // fill screen with color #3
   getch();    // wait key
   fermeture_vga(); // close clean
   return 0;
}


