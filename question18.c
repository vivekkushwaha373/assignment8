#include<stdio.h>
int main()
{
for(int i=1;i<=9;i++)
{
    if(i<5)
    {
        for(int k=1;k<=5-i;k++)
        printf(" ");
        for(int k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
        
        for(int k=1;k<=5-i;k++)
        printf(" ");
        printf("\n");
    }
    if(i==5)
    {
       for(int k=1;k<=2*5-1;k++)
        printf("*");
        printf("\n");
    }
    if(i>5)
    {
     
        for(int k=1;k<=i-5;k++)
        printf(" ");
         for(int k=1;k<=2*(10-i)-1;k++)
        printf("*");
        for(int k=1;k<=i-5;k++)
        printf(" ");
        printf("\n");
    }
}   
    return 0;
}