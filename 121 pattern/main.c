#include <stdio.h>


int main()
{
    int x,y,a;
   for( y=1; y<=4;y++)
  {
       a=1;
     for(x=1;x<=7;x++)
     {
         if(x>=5-y&&x<=y+3)
         {

          printf("%d",a);
          if(x<4) a++; else a--;
         }
        else printf(" ");

     }
     printf("\n");
  }
}
