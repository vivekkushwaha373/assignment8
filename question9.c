#include<stdio.h>
int main()
{

   
   for(int i=1;i<=4;i++)
   {

   for(int k=1;k<=i-1;k++)
   {
     printf(" ");
   }
   for(int j=1;j<=7;j++)
   {if(j<=5-i)
     printf("%d",j);
     else
     {
     if(((5-i)*2-j)>0)
     printf("%d",(5-i)*2-j);
     }
   }
   printf("\n");
   }

    return 0;
}