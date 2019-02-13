#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;


   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "c://turboc3//bgi");

   /* read result of initialization */
   errorcode = graphresult();
   /* an error occurred */
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }

   setcolor(getmaxcolor());
   line(200,200,400,100);
   line(210,210,410,110);
   line(200,200,210,210);
   line(200,200,190,210);
   line(190,210,210,210);
   arc(390,115,15,55,20);


   /* clean up */
   getch();
   closegraph();
   return 0;
}

