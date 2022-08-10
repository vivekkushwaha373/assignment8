#include<stdio.h>
int main()
{
    for(int i=1;i<=19;i++)
    {
     if(i<=3)
     {
        for(int j=1;j<=3-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=9-2*(3-i);j++)
        printf("*");
        for(int j=1;j<=2*(3-i)+1;j++)
        printf(" ");
        for(int j=1;j<=9-2*(3-i);j++)
        printf("*");
        for(int j=1;j<=3-i;j++)
        {
            printf(" ");
        }
         printf("\n");
     }
     else
     {
        for(int j=1;j<=(i-4);j++)
        printf(" ");
        if(i==4)
        {
            for(int j=1;j<=6;j++)
            printf("*");
            printf("MySirG");
            for(int j=1;j<=7;j++)
            printf("*");

        }
        else
        {
            for(int j=1;j<=19-2*(i-4);j++)
            printf("*");
        } 
        for(int j=1;j<=(i-4);j++)
        printf(" ");  
        printf("\n"); 
     }
    
    }
    return 0;
}