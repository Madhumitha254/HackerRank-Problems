#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if(num & 1)
    {
        printf("Odd\n");
    }
    else
    {
        printf("Even\n");
    }
    return 0;
}