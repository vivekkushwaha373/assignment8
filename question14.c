#include<stdio.h>
int main()
{   
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {   
            if(j==1)
            {printf("*");
            continue;}
              if(i==5)
            {
                for(int m=1;m<=5-1;m++)
                printf("*");
                break;
            }
            if(j==i&& j!=1)
            {printf("*");
            }
            else
            {if(i!=5)
            printf(" ");
            }
            
        }
       
        printf("\n");
    }
    return 0;
}