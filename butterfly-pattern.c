#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
   scanf("%d",&n);
    if(n<2)
    {
        printf("Shape Not Possible");
        return 0;
    }
    //first part
   for(int i=0;i<=n-1;i++)
   {
       for(int k=0;k<=i;k++)
       {
           printf("*");
       }
       for(int j=1; j<= 2*(n-1)-i*2;j++)
        {
            printf(" ");
        }
        for(int k=0;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
   }
    //inverted part
    for(int i=1;i<=n-1;i++)
   {
       for(int k=1;k<=n-i;k++)
       {
           printf("*");
       }
       for(int j=1;j<=2*i;j++)
       {
           printf(" ");
       }
       for(int k=1;k<=n-i;k++)
       {
           printf("*");
       }
       printf("\n");
   }
        
    return 0;
}
