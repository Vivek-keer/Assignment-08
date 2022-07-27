  #include <stdio.h>


int main()
{
    int x,y;
    for(y=1;y<=5;y++)
    {

       for(x=1;x<=5;x++)
     {
         if(x<=6-y)
        printf("*");

     }
       printf("\n");
    }
    return 0;
}
