#include<stdio.h>
int main()
{   
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {   
            if(j==5)
            {printf("*");
            continue;}
              if(i==1)
            {
                for(int m=1;m<=5-1;m++)
                printf("*");
                j=5-1;
            }
            if(j==i&& i!=1)
            {printf("*");
            }
            else
            {if(i!=1)
            printf(" ");
            }
            
        }
       
        printf("\n");
    }
    return 0;
}