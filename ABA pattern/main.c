#include <stdio.h>


int main()
{
    int x,y; char a;
   for( y=1; y<=5;y++)
  {
       a='A';
     for(x=1;x<=9;x++)
     {
         if(x>=6-y&&x<=y+4)
         {

          printf("%c ",a);
          if(x<5) a++; else a--;
         }
        else printf("  ");

     }
     printf("\n");
  }
}
