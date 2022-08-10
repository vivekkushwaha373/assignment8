#include<stdio.h>
int main()
{
for(int i=1;i<=5;i++)
{
    
        for(int e=1;e<i;e++)
        {
            printf(" ");
        }
        if(i==1)
        {
          for(int k=1;k<=9;k++)
          {
            printf("*");
         } 
         printf("\n");
         continue;
        }
        printf("*");
        for(int k=1;k<=2*(5-i)-1;k++)
        {
            printf(" ");
        }
        if(i!=5)
        printf("*");
          for(int e=1;e<i;e++)
        {
            printf(" ");
        }
        printf("\n");


    
}

    return 0;
}
