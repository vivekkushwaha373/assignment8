#include<stdio.h>
int main()
{

   
   for(int i=1;i<=4;i++)
   {

   for(int k=1;k<=4-i;k++)
   {
     printf(" ");
   }
   for(int j=1;j<=7;j++)
   {if(j<=i)
     printf("%d",j);
     else
     {
     if((2*i-j)>0)
     printf("%d",2*i-j);
     }
   }
   printf("\n");
   }

    return 0;
}