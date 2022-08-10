#include<stdio.h>
  /*   method 1
int main()
{
   int k=1;
        for(int i=0;i<4;i++)
        {
        for(int j=1;j<=7;j++)
        { 
            if(j<=4-i)
           {printf("%d",j);
            k=2*(4-j)-1;
            continue;
           }
           else
           {
            if(k>=1)
            {printf(" ");
            k--;
             continue;
             }
           }
          
           if(j<=7)
           printf("%d",8-j);
           
        }
      printf("\n");
     
        }
    
    return 0;
}*/

//method 2
int main()
{
  for(int j=1;j<=4;j++)
  {
   for(int i=1;i<=5-j;i++)
   printf("%d",i);


      for(int m=1;m<=2*(j-1)-1;m++)
      {
        printf(" ");
      }
   


   if(j==1)
   {
    for(int k=3;k>=1;k--)
    {
      printf("%d",k);
      
    }
   }
   else
   {for(int k=4-j+1;k>=1;k--)
   printf("%d",k);}
   printf("\n");
  }
  return 0;
}