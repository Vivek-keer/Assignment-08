 #include <stdio.h>


int main()
{
    int x,y;
   for( y=1; y<=5;y++)
  {

     for(x=1;x<=9;x++)
     {
         if(x>=6-y&&x<=y+4)
        printf("*");
        else printf(" ");

     }
     printf("\n");
  }
}
