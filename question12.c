#include<stdio.h>
int main()
{ int a;
    for(int i=0;i<4;i++)
    {
        for(int k=1;k<=i;k++)
        {
          printf(" ");
        }
        for(int j=65;j<=65+3-i ;j++)
        {   
            printf("%c",j);
        }

        for(int j=65+3-i-1;j>=65;j--)
        printf("%c",j);
        printf("\n");
    }
    return 0;
}