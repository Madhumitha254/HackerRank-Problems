#include <stdio.h>

int main() {
     int num,condition1,condition2,condition3;
    scanf("%d",&num);
    condition1=num>10 && num%2==0;
    condition2=num>15 && num%3==0;
    condition3=num%7==0;
    if(num>0){
        if(condition1 && condition2 && condition3)
        {
           printf("The verdict for the number %d is: SUPERNATURAL\n",num);
        }
        else if((condition1 && condition2) || (condition2 && condition3) || (condition1 && condition3))
        {
            printf("The verdict for the number %d is: MIRACULOUS\n",num);
        }
        else if(condition1 || condition2 || condition3)
        {
            printf("The verdict for the number %d is: MAGICAL\n",num);
        }
        else
        {
            printf("The verdict for the number %d is: NORMAL\n",num);
        }
    }
    else{
        printf("The verdict for the number %d is: INVALID\n",num);
    }
    return 0;
}