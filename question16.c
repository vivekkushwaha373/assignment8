#include<stdio.h>
int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        if(i==n)
        {
            for(int k=1;k<=2*(n-1)+1;k++)
            printf("*");
            break;
        }
        for(int j=1;j<=n-i;j++)
        printf(" ");
        printf("*");
        for(int m=1;m<=2*(i-1)-1;m++)
        printf(" ");
        if(i!=1)
        printf("*");
        for(int j=1;j<=n-i;j++)
        printf(" ");
        printf("\n");
    }
}