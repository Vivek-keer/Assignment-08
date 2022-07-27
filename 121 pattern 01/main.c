#include <stdio.h>



int main()
{
    int x,y,a;
   for( y=1; y<=4;y++)
  {
     for(x=1,a=0;x<=7;x++)
     {


         if((x<=5-y)||(x>=y+3))
         {

          if(x<=5-y) a++;
         else { if(x==3+y) a++; a--;}
         printf("%d",a);
         }
        else printf(" ");

     }
     printf("\n");
  }
}
