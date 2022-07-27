 #include <stdio.h>
int main()
{
    int x,y,z,a;
   for( y=1; y<=13;y++)
  {
     for(x=1;x<=19;x++)
     {
         if(y<=3)
         {
         if((x>=4-y&&x<=6+y)||(x>=14-y&&x<=16+y))
          printf("*");
           else printf(" ");
         }
         else if(y==4)
         {
             if(x<=6) printf("*");
             if(x==7)printf("MYSIRG");
             if(x>=8&&x<=12) continue;
             if(x>12) printf("*");


         }
         else
         {
                 if(y>=5)
             {
                 if(x>=y-3&&x<=23-y)
                    printf("*"); else printf(" ");
             }
         }



     }

     printf("\n");
  }
}
















