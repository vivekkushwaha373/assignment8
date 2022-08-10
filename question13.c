#include<stdio.h>
int main()
{

for(int k=1;k<=7;k++)
{
    for(int m=1;m<=8-k;m++)
    printf("%c",65+m-1);
    for(int m=1;m<=2*(k-1)-1;m++)
    printf(" ");
    
    if(k==1)
    {
    for(int m=65+8-k-1-1;m>=65;m--)
    {
        printf("%c",m);
    }
    }
    else
    {
        for(int m=65+8-k-1-1+1;m>=65;m--)
    {
        printf("%c",m);
    }
    }
    printf("\n");
    // break;
}   


    return 0;
}
