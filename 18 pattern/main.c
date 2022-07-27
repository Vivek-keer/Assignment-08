#include <stdio.h>
int main()
{
    int x,y;
   for( y=1; y<=9;y++)
  {
     for(x=1;x<=9;x++)
     {
         if(y<=5)
         {
         if(x>=6-y&&x<=4+y)
          printf("*");
           else printf(" ");
         }
         else
         {
         if(x>=y-4&&x<=14-y)
          printf("*");
          else printf(" ");

         }


     }
     printf("\n");
  }
}


