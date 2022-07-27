#include <stdio.h>
int main()
{
    int x,y;
   for( y=1; y<=5;y++)
  {
     for(x=1;x<=9;x++)
     {
         if(y==1)
          printf("*");
          else if(x==y||x==10-y) printf("*"); else printf(" ");
     }
     printf("\n");
  }
}


