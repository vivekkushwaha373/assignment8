#include<stdio.h>
int main()
{
   for(int i=1;i<=5;i++)
   {
    //printing space
    for(int j=1;j<=5-i;j++)
    printf(" ");
    //printing half character
    for(int j=65;j<65+i;j++)
    printf("%c",j);
    //printing second half;
    for(int m=65+i-1-1;m>=65 ;m-- )
    {
          printf("%c",m);
    }
    //again printing spaces
    for(int j=1;j<5-i;j++)
    printf(" ");
    printf("\n");
   }

    return 0;
}