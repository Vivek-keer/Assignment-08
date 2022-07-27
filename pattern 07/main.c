#include <stdio.h>


int main()
{
    int x,y;
   for( y=1; y<=5;y++)
  {

     for(x=1;x<=10;x++)
     {
         if(x<=6-y||x>=y+5)
        printf("*");
        else printf(" ");

     }
     printf("\n");
  }
}
