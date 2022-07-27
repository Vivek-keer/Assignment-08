#include <stdio.h>


int main()
{
    int x,y; char a;
    for(y=1;y<=7;y++)
   {
        for(a='A',x=1;x<=13;x++)
        {
         if(x<=8-y||x>=6+y)
         {
         if(x<=8-y) a++;
         else { if(x==6+y) a++; a--;}
         printf("%c",a-1);
         }
        else{ printf(" "); }

        }
        printf("\n");

   }

    return 0;
}
