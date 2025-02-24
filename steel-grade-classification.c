#include <stdio.h>

int main() {
    int h,t,grade;
    float c;
    scanf("%d %f %d",&h,&c,&t);
    if(h>50 && c<0.7f && t>5600)
    {
        grade=10;
        printf("The grade of the steel is: %d\n",grade);
        printf("All of the conditions met.\n");
    }
    else if(h>50 && c<0.7f )
    {
        grade=9;
        printf("The grade of the steel is: %d\n",grade);
        printf("Two conditions met.\n");
    }
    else if(c<0.7f && t>5600)
    {
        grade=8;
        printf("The grade of the steel is: %d\n",grade);
        printf("Two conditions met.\n");
    }
    else if(h>50 && t>5600)
    {
        grade=7;
        printf("The grade of the steel is: %d\n",grade);
        printf("Two conditions met.\n");
    }
    else if(h>50 || c<0.7f || t>5600)
    {
        grade=6;
        printf("The grade of the steel is: %d\n",grade);
        printf("Only one condition met.\n");
        
    }
    else
    {
        grade=5;
        printf("The grade of the steel is: %d\n",grade);
        printf("None of the conditions met.\n");
    }
 return 0;
}