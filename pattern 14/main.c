#include <stdio.h>
int main()
{
    int x,y;
   for( y=1; y<=5;y++)
  {
     for(x=1;x<=5;x++)
     {
         if(y>=5)
          printf("*");
          else if(x==1||x==y) printf("*"); else printf(" ");


     }
     printf("\n");
  }
}



