#include <stdio.h>


int main()
{
    int x,y; char a;
   for( y=1; y<=4;y++)
  {
       a='A';
     for(x=1;x<=7;x++)
     {
         if(x>=y&&x<=8-y)
         {

          printf("%c",a);
          if(x<4) a++; else a--;
         }
        else printf(" ");

     }
     printf("\n");
  }
}
