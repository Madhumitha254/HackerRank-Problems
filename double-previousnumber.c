#include <stdio.h>

int main() {
    int n;
    int store=0;
    scanf("%d",&n);
    if(n<=1)
    {
        return 0;
    }
    printf("<");
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            store=i;
            printf("%d",store);
        }
        else
        {
            store = store+store;
            printf(" %d",store);
        }
    }
    printf(">");
    return 0;
}